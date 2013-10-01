(function($) {
	$(function(){
		$("#mobile-menu").click(function(){
			/*
			$menu = $("#block-system-main-menu");
			if ($menu.hasClass("nav-open"))
			{
				$menu.slideUp(function(){
					$menu.toggleClass("nav-open");
				});
			}
			else
			{
				$menu.slideDown(function(){
					$menu.toggleClass("nav-open");
				});
			}
			*/

			$("#block-system-main-menu").toggleClass("nav-open");
			return false;
		});
	});
}(jQuery));
