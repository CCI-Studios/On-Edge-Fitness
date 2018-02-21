(function($) {
	$(function(){

		$("ul.collapse > li:first").addClass("open").find("ul").css("display","block");

		$("ul.collapse > li > h3").click(function(){
			$li = $(this).parent();
			$ul_ul = $li.find("ul");

			if ($li.hasClass("open"))
			{
				$ul_ul.slideUp();
				$li.removeClass("open");;
			}
			else
			{
				$ul_ul.slideDown();
				$li.addClass("open");
			}
		});
	});
}(jQuery));
