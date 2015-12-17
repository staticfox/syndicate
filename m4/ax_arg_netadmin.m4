AC_DEFUN([AX_ARG_ENABLE_NETADMIN],[
  AC_ARG_ENABLE(netadmin,
    [AS_HELP_STRING([--enable-netadmin],[Enable netadmin flag in config.])],
	  [AC_DEFINE(CONF_NETADMIN, 1, [Define if you want netadmins to be settable via config.])], [])
])
