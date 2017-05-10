<?php

$aliases['dev'] = array(
	'uri'=> 'onedge.ccistaging.com',
	'root' => '/home/staging/subdomains/onedge/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),

	'ssh-options' => "-p 37241",
);

$aliases['live'] = array(
	'uri'=> 'onedgefitness.com',
	'root' => '/home/onedge/subdomains/live/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'onedge',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);

