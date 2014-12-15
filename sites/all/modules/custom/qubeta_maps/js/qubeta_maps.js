/**
 * @file
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.addHereMapsAPI = {
  attach: function(context, settings) {

    var features = Drupal.settings.qubeta_maps.features;

    function addMarkersToMap(map, features) {
      var group = new H.map.Group();

      group.addEventListener('tap', function (evt) {
        // event target is the marker itself, group is a parent event target
        // for all objects that it contains
        var bubble =  new H.ui.InfoBubble(evt.target.getPosition(), {
          // read custom data
          content: evt.target.getData()
        });
        // show info bubble
        ui.addBubble(bubble);
      }, false);

      for (var i = features.length - 1; i >= 0; i--) {

        // get the coordinates
        var wkt = features[i]['wkt'];
        var result = wkt.split(" ");
        var coor_long = result[1].substring(1, result[1].length);
        var coor_lat = result[2].substring(0, result[2].length - 1);

        // get the title
        var title = features[i]['attributes']['title'];

        // get the cleanliness
         var cleanliness = features[i]['attributes']['field_cleanliness'];

        var marker = new H.map.Marker({lat:coor_lat, lng:coor_long});
        marker.setData(title + cleanliness);
        group.addObject(marker);
      };

      map.addObject(group);
      map.setViewBounds(group.getBounds());
    }

    //Step 1: initialize communication with the platform
    var platform = new H.service.Platform({
      app_id: 'DemoAppId01082013GAL',
        app_code: 'AJKnXv84fjrb0KIHawS0Tg',
        useCIT: true
    });
    var defaultLayers = platform.createDefaultLayers();

    //Step 2: initialize a map  - not specificing a location will give a whole world view.
    var map = new H.Map(document.getElementById('qubeta_map'),
      defaultLayers.normal.map);

    //Step 3: make the map interactive
    // MapEvents enables the event system
    // Behavior implements default interactions for pan/zoom (also on mobile touch environments)
    var behavior = new H.mapevents.Behavior(new H.mapevents.MapEvents(map));

    // Create the default UI components
    var ui = H.ui.UI.createDefault(map, defaultLayers);

    addMarkersToMap(map, features);

  }
};


})(jQuery, Drupal, this, this.document);
