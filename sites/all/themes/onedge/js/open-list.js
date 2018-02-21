(function ($) {
  var $header
	$(function () {
    $('.list-open-button').on('click', toggleList)
    var $list = $('.view-class-list, .view-team-list')
    if ($list.length === 1) {
      $('.main-content').css('min-height', $list.height())
      $list.on('click', closeList)
    }
  });
  function toggleList () {
    $('body').toggleClass('list-open')
    return false
  }
  function closeList () {
    $('body').removeClass('list-open')
  }
}(jQuery));
