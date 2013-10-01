(function($) {
	$(function(){

		$("ul.collapse > li:first").addClass("open");

		$("ul.collapse > li > h3").click(function(){
			$li = $(this).parent();
			$ul_ul = $li.find("ul");

			if ($li.hasClass("open"))
			{
				$ul_ul.slideUp(function(){
					$li.removeClass("open");
				});
			}
			else
			{
				$ul_ul.slideDown(function(){
					$li.addClass("open");
				});
			}
		});
	});
}(jQuery));
