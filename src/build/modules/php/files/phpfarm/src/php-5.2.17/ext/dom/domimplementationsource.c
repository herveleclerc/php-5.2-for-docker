/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Christian Stocker <chregu@php.net>                          |
   |          Rob Richards <rrichards@php.net>                            |
   +----------------------------------------------------------------------+
*/

/* $Id: domimplementationsource.c 293036 2010-01-03 09:23:27Z sebastian $ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#if HAVE_LIBXML && HAVE_DOM
#include "php_dom.h"


/* {{{ arginfo */
static
ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_implementationsource_getdomimplementation, 0, 0, 1)
	ZEND_ARG_INFO(0, features)
ZEND_END_ARG_INFO();

static
ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_implementationsource_getdomimplementations, 0, 0, 1)
	ZEND_ARG_INFO(0, features)
ZEND_END_ARG_INFO();
/* }}} */

/*
* class domimplementationsource 
*
* URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMImplementationSource
* Since: DOM Level 3
*/

zend_function_entry php_dom_domimplementationsource_class_functions[] = {
	PHP_FALIAS(getDomimplementation, dom_domimplementationsource_get_domimplementation, arginfo_dom_implementationsource_getdomimplementation)
	PHP_FALIAS(getDomimplementations, dom_domimplementationsource_get_domimplementations, arginfo_dom_implementationsource_getdomimplementations)
	{NULL, NULL, NULL}
};

/* {{{ attribute protos, not implemented yet */


/* {{{ proto domdomimplementation dom_domimplementationsource_get_domimplementation(string features);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#ID-getDOMImpl
Since: 
*/
PHP_FUNCTION(dom_domimplementationsource_get_domimplementation)
{
 DOM_NOT_IMPLEMENTED();
}
/* }}} end dom_domimplementationsource_get_domimplementation */


/* {{{ proto domimplementationlist dom_domimplementationsource_get_domimplementations(string features);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#ID-getDOMImpls
Since: 
*/
PHP_FUNCTION(dom_domimplementationsource_get_domimplementations)
{
 DOM_NOT_IMPLEMENTED();
}
/* }}} end dom_domimplementationsource_get_domimplementations */
#endif
