(function ($) {
  var $header
	$(function () {
    $header = $('.header')
		$(window).on('scroll', scroll);
  });
  function scroll () {
    if ($(window).scrollTop() >= 80) {
      $header.addClass('scroll');
    } else {
      $header.removeClass('scroll');
    }
  }
}(jQuery));
