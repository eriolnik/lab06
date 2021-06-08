set(CPACK_SOURCE_GENERATOR "TGZ;ZIP")
set(CPACK_ARCHIVE_SOURCE_PACKAGE_FILE_NAME "solver-source-files")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "solver-source-files")
set(CPACK_SOURCE_IGNORE_FILES
/_build/
)
include(CPack)
