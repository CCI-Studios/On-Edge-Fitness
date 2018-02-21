(function ($) {
  var $content
  var $list
	$(function () {
    $content = $('.view-classes');
    $list = $('.view-class-list');
    if (!$content.length || !$list.length) {
      return;
    }
    $list.find('.view-content').on('click', 'a', listClick);
    if (window.location.hash) {
      var nid = window.location.hash.substr(1);
      var $row = $content.find('.nid-' + nid);
      if ($row.length) {
        $content.find('.views-row').hide();
        $row.show();
      }
    }
  });
  function listClick () {
    var nid = $(this).attr('data-nid');
    $content.find('.views-row').hide();
    $content.find('.nid-' + nid).show();
  }
}(jQuery));
