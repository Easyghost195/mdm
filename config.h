/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */
#define PACKAGE "mdm"
#define VERSION "2.0.19"
#define GETTEXT_PACKAGE "mdm"
#define HALT_COMMAND "/usr/bin/poweroff;/sbin/poweroff;/sbin/shutdown -h now;/usr/sbin/shutdown -h now"
#define REBOOT_COMMAND "/usr/bin/reboot;/sbin/reboot;/sbin/shutdown -r now;/usr/sbin/shutdown -r now"
#define OTHER_REBOOT_COMMAND ""
#define SOUND_PROGRAM "/usr/bin/paplay"
#define SUSPEND_COMMAND ""
#define ENABLE_IPV6 1
#define ENABLE_NLS 1
/* #undef ALWAYS_RESTART_SERVER */
#define MDM_USER_PATH "/bin:/usr/bin"
#define MDM_RBAC_SYSCMD_KEYS ""
/* #undef HAVE_CATGETS */
/* #undef HAVE_CHPASS */
#define HAVE_CLEARENV 1
/* #undef HAVE_CRYPT */
/* #undef HAVE_DEFOPEN */
#define HAVE_GETTEXT 1
#define HAVE_LC_MESSAGES 1
/* #undef HAVE_LIBSM */
/* #undef HAVE_LOGINCAP */
/* #undef HAVE_LOGINRESTRICTIONS */
#define HAVE_PAM 1
/* #undef HAVE_PASSWDEXPIRED */
#define HAVE_SCHED_YIELD 1
#define HAVE_SELINUX 1
#define HAVE_SETENV 1
#define HAVE_SETRESUID 1
/* #undef HAVE_SHADOW */
/* #undef HAVE_SOLARIS_XINERAMA */
/* #undef HAVE_STPCPY */
/* #undef HAVE_SYS_SOCKIO_H */
#define HAVE_SYS_VT_H 1
#define HAVE_TCPWRAPPERS 1
#define HAVE_UNSETENV 1
#define HAVE_XINERAMA 1
#define HAVE_XFREE_XINERAMA 1
#define HAVE_XINPUT 1
#define UTMP_LINE_ATTACHED "/dev/tty0"
#define UTMP_PSEUDO_DEVICE "false"
#define X_SERVER "/usr/bin/X"
#define X_SERVER_PATH "/usr/bin"
#define X_CONFIG_OPTIONS "-audit 0"
/* #undef X_PATH */
#define XSESSION_SHELL "/bin/sh"
#define XEVIE_OPTION ""
/* #undef HAVE_UT_SYSLEN */

/* Define if you have the Andrew File System */
/* #undef AFS */

/* Define this variable if the code to clear the ADMCHG flag can be compiled
   */
/* #undef CAN_CLEAR_ADMCHG */

/* Define this variable if the code to use the setpenv function can be
   compiled and used */
/* #undef CAN_USE_SETPENV */

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Define to use AIX3 statfs to get filesystem type */
/* #undef FSTYPE_AIX_STATFS */

/* Define to use Ultrix getmnt to get filesystem typ */
/* #undef FSTYPE_GETMNT */

/* Define to use 4.3BSD getmntent to get filesystem typ */
#define FSTYPE_MNTENT /**/

/* Define to use 4.4BSD and OSF1 statfs to get filesystem typ */
/* #undef FSTYPE_STATFS */

/* Define to use SVR4 statvfs to get filesystem type */
/* #undef FSTYPE_STATVFS */

/* Define to use SVR3.2 statfs to get filesystem type */
/* #undef FSTYPE_USG_STATFS */

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `chpass' function. */
/* #undef HAVE_CHPASS */

/* Define to 1 if you have the `clearenv' function. */
#define HAVE_CLEARENV 1

/* Define to 1 if you have the <crt_externs.h> header file. */
/* #undef HAVE_CRT_EXTERNS_H */

/* Define to 1 if you have the <crypt.h> header file. */
/* #undef HAVE_CRYPT_H */

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `endpwdb' function. */
/* #undef HAVE_ENDPWDB */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `getuserpw' function. */
/* #undef HAVE_GETUSERPW */

/* Define to 1 if you have the `getutxent' function. */
#define HAVE_GETUTXENT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* linux audit support */
/* #undef HAVE_LIBAUDIT */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `pam' library (-lpam). */
/* #undef HAVE_LIBPAM */

/* Define to 1 if you have the `util' library (-lutil). */
#define HAVE_LIBUTIL 1

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `login' function. */
/* #undef HAVE_LOGIN */

/* Define to 1 if you have the `loginrestrictions' function. */
/* #undef HAVE_LOGINRESTRICTIONS */

/* Define to 1 if you have the `logout' function. */
/* #undef HAVE_LOGOUT */

/* Define to 1 if you have the `logwtmp' function. */
/* #undef HAVE_LOGWTMP */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `passwdexpired' function. */
/* #undef HAVE_PASSWDEXPIRED */

/* Define to 1 if you have the `putuserpw' function. */
/* #undef HAVE_PUTUSERPW */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
#define HAVE_SECURITY_PAM_APPL_H 1

/* Define to 1 if you have the <security/pam_misc.h> header file. */
#define HAVE_SECURITY_PAM_MISC_H 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setpwdb' function. */
/* #undef HAVE_SETPWDB */

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vt.h> header file. */
#define HAVE_SYS_VT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the `updwtmpx' function. */
#define HAVE_UPDWTMPX 1

/* Define to 1 if you have the <usersec.h> header file. */
/* #undef HAVE_USERSEC_H */

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define if your utmp struct contains a ut_exit.e_termination field. */
#define HAVE_UT_UT_EXIT_E_TERMINATION 1

/* Define if your utmp struct contains a ut_host field. */
#define HAVE_UT_UT_HOST 1

/* Define if your utmp struct contains a ut_id field. */
#define HAVE_UT_UT_ID 1

/* Define if your utmp struct contains a ut_name field. */
#define HAVE_UT_UT_NAME 1

/* Define if your utmp struct contains a ut_pid field. */
#define HAVE_UT_UT_PID 1

/* Define if your utmp struct contains a ut_syslen field. */
/* #undef HAVE_UT_UT_SYSLEN */

/* Define if your utmp struct contains a ut_time field. */
#define HAVE_UT_UT_TIME 1

/* Define if your utmp struct contains a ut_tv field. */
#define HAVE_UT_UT_TV 1

/* Define if your utmp struct contains a ut_type field. */
#define HAVE_UT_UT_TYPE 1

/* Define if your utmp struct contains a ut_user field. */
#define HAVE_UT_UT_USER 1

/* Define to 1 if you have the `_NSGetEnviron' function. */
/* #undef HAVE__NSGETENVIRON */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* pid file */
#define MDM_PID_FILE "/var/run/mdm.pid"

/* Path to the nologin binary */
#define NOLOGIN "/usr/sbin/nologin"

/* Name of package */
#define PACKAGE "mdm"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to the name of a structure which holds utmp data. */
#define UTMP struct utmpx

/* Version number of package */
#define VERSION "2.0.19"

/* Define to enable ConsoleKit support */
#define WITH_CONSOLE_KIT 1

/* Options used when launching xserver */
#define X_CONFIG_OPTIONS "-audit 0"

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Compatibility type */
/* #undef socklen_t */
