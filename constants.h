#if ARCHIVE_VERSION_NUMBER < 3002000
#define ARCHIVE_FORMAT_WARC                        0xF0000
#define ARCHIVE_FORMAT_RAR_V5                     0x100000
#define ARCHIVE_READ_FORMAT_CAPS_NONE                  (0)
#define ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_DATA       (1<<0)
#define ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_METADATA   (1<<1)

#define ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED      -2
#define ARCHIVE_READ_FORMAT_ENCRYPTION_DONT_KNOW        -1

#define ARCHIVE_ENTRY_ACL_STYLE_SOLARIS         0x00000004
#define ARCHIVE_ENTRY_ACL_STYLE_COMPACT         0x00000010
#define ARCHIVE_ENTRY_ACL_ENTRY_INHERITED       0x01000000
#define ARCHIVE_ENTRY_ACL_STYLE_SEPARATOR_COMMA 0x00000008

#define ARCHIVE_EXTRACT_CLEAR_NOCHANGE_FFLAGS    (0x20000)

#define AE_SYMLINK_TYPE_UNDEFINED                        0
#define AE_SYMLINK_TYPE_FILE                             1
#define AE_SYMLINK_TYPE_DIRECTORY                        2
#endif


#define EXTRACT_OWNER ARCHIVE_EXTRACT_OWNER
#define EXTRACT_PERM ARCHIVE_EXTRACT_PERM
#define EXTRACT_TIME ARCHIVE_EXTRACT_TIME
#define EXTRACT_NO_OVERWRITE ARCHIVE_EXTRACT_NO_OVERWRITE
#define EXTRACT_UNLINK ARCHIVE_EXTRACT_UNLINK
#define EXTRACT_ACL ARCHIVE_EXTRACT_ACL
#define EXTRACT_FFLAGS ARCHIVE_EXTRACT_FFLAGS
#define EXTRACT_XATTR ARCHIVE_EXTRACT_XATTR
#define EXTRACT_SECURE_SYMLINKS ARCHIVE_EXTRACT_SECURE_SYMLINKS
#define EXTRACT_SECURE_NODOTDOT ARCHIVE_EXTRACT_SECURE_NODOTDOT
#define EXTRACT_NO_AUTODIR ARCHIVE_EXTRACT_NO_AUTODIR
#define EXTRACT_NO_OVERWRITE_NEWER ARCHIVE_EXTRACT_NO_OVERWRITE_NEWER
#define EXTRACT_SPARSE ARCHIVE_EXTRACT_SPARSE
#define EXTRACT_MAC_METADATA ARCHIVE_EXTRACT_MAC_METADATA
#define EXTRACT_NO_HFS_COMPRESSION ARCHIVE_EXTRACT_NO_HFS_COMPRESSION
#define EXTRACT_HFS_COMPRESSION_FORCED ARCHIVE_EXTRACT_HFS_COMPRESSION_FORCED
#define EXTRACT_SECURE_NOABSOLUTEPATHS ARCHIVE_EXTRACT_SECURE_NOABSOLUTEPATHS
#define EXTRACT_CLEAR_NOCHANGE_FFLAGS ARCHIVE_EXTRACT_CLEAR_NOCHANGE_FFLAGS

#define FORMAT_CPIO ARCHIVE_FORMAT_CPIO
#define FORMAT_CPIO_POSIX ARCHIVE_FORMAT_CPIO_POSIX
#define FORMAT_CPIO_BIN_LE ARCHIVE_FORMAT_CPIO_BIN_LE
#define FORMAT_CPIO_BIN_BE ARCHIVE_FORMAT_CPIO_BIN_BE
#define FORMAT_CPIO_SVR4_NOCRC ARCHIVE_FORMAT_CPIO_SVR4_NOCRC
#define FORMAT_CPIO_SVR4_CRC ARCHIVE_FORMAT_CPIO_SVR4_CRC
#define FORMAT_CPIO_AFIO_LARGE ARCHIVE_FORMAT_CPIO_AFIO_LARGE
#define FORMAT_SHAR ARCHIVE_FORMAT_SHAR
#define FORMAT_SHAR_BASE ARCHIVE_FORMAT_SHAR_BASE
#define FORMAT_SHAR_DUMP ARCHIVE_FORMAT_SHAR_DUMP
#define FORMAT_TAR ARCHIVE_FORMAT_TAR
#define FORMAT_TAR_USTAR ARCHIVE_FORMAT_TAR_USTAR
#define FORMAT_TAR_PAX_INTERCHANGE ARCHIVE_FORMAT_TAR_PAX_INTERCHANGE
#define FORMAT_TAR_PAX_RESTRICTED ARCHIVE_FORMAT_TAR_PAX_RESTRICTED
#define FORMAT_TAR_GNUTAR ARCHIVE_FORMAT_TAR_GNUTAR
#define FORMAT_ISO9660 ARCHIVE_FORMAT_ISO9660
#define FORMAT_ISO9660_ROCKRIDGE ARCHIVE_FORMAT_ISO9660_ROCKRIDGE
#define FORMAT_ZIP ARCHIVE_FORMAT_ZIP
#define FORMAT_EMPTY ARCHIVE_FORMAT_EMPTY
#define FORMAT_AR ARCHIVE_FORMAT_AR
#define FORMAT_AR_GNU ARCHIVE_FORMAT_AR_GNU
#define FORMAT_AR_BSD ARCHIVE_FORMAT_AR_BSD
#define FORMAT_MTREE ARCHIVE_FORMAT_MTREE
#define FORMAT_RAW ARCHIVE_FORMAT_RAW
#define FORMAT_XAR ARCHIVE_FORMAT_XAR
#define FORMAT_LHA ARCHIVE_FORMAT_LHA
#define FORMAT_CAB ARCHIVE_FORMAT_CAB
#define FORMAT_RAR ARCHIVE_FORMAT_RAR
#define FORMAT_7ZIP ARCHIVE_FORMAT_7ZIP
#define FORMAT_WARC ARCHIVE_FORMAT_WARC
#define FORMAT_RAR_V5 ARCHIVE_FORMAT_RAR_V5

#define READ_FORMAT_ENCRYPTION_UNSUPPORTED ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED
#define READ_FORMAT_ENCRYPTION_DONT_KNOW ARCHIVE_READ_FORMAT_ENCRYPTION_DONT_KNOW

#define READ_FORMAT_CAPS_NONE ARCHIVE_READ_FORMAT_CAPS_NONE
#define READ_FORMAT_CAPS_ENCRYPT_DATA ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_DATA
#define READ_FORMAT_CAPS_ENCRYPT_METADATA ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_METADATA

#define ENTRY_ACL_EXECUTE ARCHIVE_ENTRY_ACL_EXECUTE
#define ENTRY_ACL_WRITE ARCHIVE_ENTRY_ACL_WRITE
#define ENTRY_ACL_READ ARCHIVE_ENTRY_ACL_READ
#define ENTRY_ACL_READ_DATA ARCHIVE_ENTRY_ACL_READ_DATA
#define ENTRY_ACL_LIST_DIRECTORY ARCHIVE_ENTRY_ACL_LIST_DIRECTORY
#define ENTRY_ACL_WRITE_DATA ARCHIVE_ENTRY_ACL_WRITE_DATA
#define ENTRY_ACL_ADD_FILE ARCHIVE_ENTRY_ACL_ADD_FILE
#define ENTRY_ACL_APPEND_DATA ARCHIVE_ENTRY_ACL_APPEND_DATA
#define ENTRY_ACL_ADD_SUBDIRECTORY ARCHIVE_ENTRY_ACL_ADD_SUBDIRECTORY
#define ENTRY_ACL_READ_NAMED_ATTRS ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS
#define ENTRY_ACL_WRITE_NAMED_ATTRS ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS
#define ENTRY_ACL_DELETE_CHILD ARCHIVE_ENTRY_ACL_DELETE_CHILD
#define ENTRY_ACL_READ_ATTRIBUTES ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES
#define ENTRY_ACL_WRITE_ATTRIBUTES ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES
#define ENTRY_ACL_DELETE ARCHIVE_ENTRY_ACL_DELETE
#define ENTRY_ACL_READ_ACL ARCHIVE_ENTRY_ACL_READ_ACL
#define ENTRY_ACL_WRITE_ACL ARCHIVE_ENTRY_ACL_WRITE_ACL
#define ENTRY_ACL_WRITE_OWNER ARCHIVE_ENTRY_ACL_WRITE_OWNER
#define ENTRY_ACL_SYNCHRONIZE ARCHIVE_ENTRY_ACL_SYNCHRONIZE
#define ENTRY_ACL_PERMS_POSIX1E ARCHIVE_ENTRY_ACL_PERMS_POSIX1E
#define ENTRY_ACL_PERMS_NFS4 ARCHIVE_ENTRY_ACL_PERMS_NFS4
#define ENTRY_ACL_ENTRY_INHERITED ARCHIVE_ENTRY_ACL_ENTRY_INHERITED
#define ENTRY_ACL_ENTRY_FILE_INHERIT ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT
#define ENTRY_ACL_ENTRY_DIRECTORY_INHERIT ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT
#define ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT ARCHIVE_ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT
#define ENTRY_ACL_ENTRY_INHERIT_ONLY ARCHIVE_ENTRY_ACL_ENTRY_INHERIT_ONLY
#define ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS ARCHIVE_ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS
#define ENTRY_ACL_ENTRY_FAILED_ACCESS ARCHIVE_ENTRY_ACL_ENTRY_FAILED_ACCESS
#define ENTRY_ACL_INHERITANCE_NFS4 ARCHIVE_ENTRY_ACL_INHERITANCE_NFS4
#define ENTRY_ACL_TYPE_ACCESS ARCHIVE_ENTRY_ACL_TYPE_ACCESS
#define ENTRY_ACL_TYPE_DEFAULT ARCHIVE_ENTRY_ACL_TYPE_DEFAULT
#define ENTRY_ACL_TYPE_ALLOW ARCHIVE_ENTRY_ACL_TYPE_ALLOW
#define ENTRY_ACL_TYPE_DENY ARCHIVE_ENTRY_ACL_TYPE_DENY
#define ENTRY_ACL_TYPE_AUDIT ARCHIVE_ENTRY_ACL_TYPE_AUDIT
#define ENTRY_ACL_TYPE_ALARM ARCHIVE_ENTRY_ACL_TYPE_ALARM
#define ENTRY_ACL_TYPE_POSIX1E ARCHIVE_ENTRY_ACL_TYPE_POSIX1E
#define ENTRY_ACL_TYPE_NFS4 ARCHIVE_ENTRY_ACL_TYPE_NFS4
#define ENTRY_ACL_USER ARCHIVE_ENTRY_ACL_USER
#define ENTRY_ACL_USER_OBJ ARCHIVE_ENTRY_ACL_USER_OBJ
#define ENTRY_ACL_GROUP ARCHIVE_ENTRY_ACL_GROUP
#define ENTRY_ACL_GROUP_OBJ ARCHIVE_ENTRY_ACL_GROUP_OBJ
#define ENTRY_ACL_MASK ARCHIVE_ENTRY_ACL_MASK
#define ENTRY_ACL_OTHER ARCHIVE_ENTRY_ACL_OTHER
#define ENTRY_ACL_EVERYONE ARCHIVE_ENTRY_ACL_EVERYONE
#define ENTRY_ACL_STYLE_EXTRA_ID ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID
#define ENTRY_ACL_STYLE_MARK_DEFAULT ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT
#define ENTRY_ACL_STYLE_SOLARIS ARCHIVE_ENTRY_ACL_STYLE_SOLARIS
#define ENTRY_ACL_STYLE_SEPARATOR_COMMA ARCHIVE_ENTRY_ACL_STYLE_SEPARATOR_COMMA
#define ENTRY_ACL_STYLE_COMPACT ARCHIVE_ENTRY_ACL_STYLE_COMPACT

#include "const-c-constants.inc"

#undef EXTRACT_OWNER
#undef EXTRACT_PERM
#undef EXTRACT_TIME
#undef EXTRACT_NO_OVERWRITE
#undef EXTRACT_UNLINK
#undef EXTRACT_ACL
#undef EXTRACT_FFLAGS
#undef EXTRACT_XATTR
#undef EXTRACT_SECURE_SYMLINKS
#undef EXTRACT_SECURE_NODOTDOT
#undef EXTRACT_NO_AUTODIR
#undef EXTRACT_NO_OVERWRITE_NEWER
#undef EXTRACT_SPARSE
#undef EXTRACT_MAC_METADATA
#undef EXTRACT_NO_HFS_COMPRESSION
#undef EXTRACT_HFS_COMPRESSION_FORCED
#undef EXTRACT_SECURE_NOABSOLUTEPATHS
#undef EXTRACT_CLEAR_NOCHANGE_FFLAGS

#undef FORMAT_CPIO
#undef FORMAT_CPIO_POSIX
#undef FORMAT_CPIO_BIN_LE
#undef FORMAT_CPIO_BIN_BE
#undef FORMAT_CPIO_SVR4_NOCRC
#undef FORMAT_CPIO_SVR4_CRC
#undef FORMAT_CPIO_AFIO_LARGE
#undef FORMAT_SHAR
#undef FORMAT_SHAR_BASE
#undef FORMAT_SHAR_DUMP
#undef FORMAT_TAR
#undef FORMAT_TAR_USTAR
#undef FORMAT_TAR_PAX_INTERCHANGE
#undef FORMAT_TAR_PAX_RESTRICTED
#undef FORMAT_TAR_GNUTAR
#undef FORMAT_ISO9660
#undef FORMAT_ISO9660_ROCKRIDGE
#undef FORMAT_ZIP
#undef FORMAT_EMPTY
#undef FORMAT_AR
#undef FORMAT_AR_GNU
#undef FORMAT_AR_BSD
#undef FORMAT_MTREE
#undef FORMAT_RAW
#undef FORMAT_XAR
#undef FORMAT_LHA
#undef FORMAT_CAB
#undef FORMAT_RAR
#undef FORMAT_7ZIP
#undef FORMAT_WARC
#undef FORMAT_RAR_V5

#undef READ_FORMAT_ENCRYPTION_UNSUPPORTED
#undef READ_FORMAT_ENCRYPTION_DONT_KNOW

#undef READ_FORMAT_CAPS_NONE
#undef READ_FORMAT_CAPS_ENCRYPT_DATA
#undef READ_FORMAT_CAPS_ENCRYPT_METADATA

#undef ENTRY_ACL_EXECUTE
#undef ENTRY_ACL_WRITE
#undef ENTRY_ACL_READ
#undef ENTRY_ACL_READ_DATA
#undef ENTRY_ACL_LIST_DIRECTORY
#undef ENTRY_ACL_WRITE_DATA
#undef ENTRY_ACL_ADD_FILE
#undef ENTRY_ACL_APPEND_DATA
#undef ENTRY_ACL_ADD_SUBDIRECTORY
#undef ENTRY_ACL_READ_NAMED_ATTRS
#undef ENTRY_ACL_WRITE_NAMED_ATTRS
#undef ENTRY_ACL_DELETE_CHILD
#undef ENTRY_ACL_READ_ATTRIBUTES
#undef ENTRY_ACL_WRITE_ATTRIBUTES
#undef ENTRY_ACL_DELETE
#undef ENTRY_ACL_READ_ACL
#undef ENTRY_ACL_WRITE_ACL
#undef ENTRY_ACL_WRITE_OWNER
#undef ENTRY_ACL_SYNCHRONIZE
#undef ENTRY_ACL_PERMS_POSIX1E
#undef ENTRY_ACL_PERMS_NFS4
#undef ENTRY_ACL_ENTRY_INHERITED
#undef ENTRY_ACL_ENTRY_FILE_INHERIT
#undef ENTRY_ACL_ENTRY_DIRECTORY_INHERIT
#undef ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT
#undef ENTRY_ACL_ENTRY_INHERIT_ONLY
#undef ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS
#undef ENTRY_ACL_ENTRY_FAILED_ACCESS
#undef ENTRY_ACL_INHERITANCE_NFS4
#undef ENTRY_ACL_TYPE_ACCESS
#undef ENTRY_ACL_TYPE_DEFAULT
#undef ENTRY_ACL_TYPE_ALLOW
#undef ENTRY_ACL_TYPE_DENY
#undef ENTRY_ACL_TYPE_AUDIT
#undef ENTRY_ACL_TYPE_ALARM
#undef ENTRY_ACL_TYPE_POSIX1E
#undef ENTRY_ACL_TYPE_NFS4
#undef ENTRY_ACL_USER
#undef ENTRY_ACL_USER_OBJ
#undef ENTRY_ACL_GROUP
#undef ENTRY_ACL_GROUP_OBJ
#undef ENTRY_ACL_MASK
#undef ENTRY_ACL_OTHER
#undef ENTRY_ACL_EVERYONE
#undef ENTRY_ACL_STYLE_EXTRA_ID
#undef ENTRY_ACL_STYLE_MARK_DEFAULT
#undef ENTRY_ACL_STYLE_SOLARIS
#undef ENTRY_ACL_STYLE_SEPARATOR_COMMA
#undef ENTRY_ACL_STYLE_COMPACT