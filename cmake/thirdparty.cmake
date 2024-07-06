# freetype
if(NOT TARGET freetype)
    set(FT_DISABLE_BROTLI ON CACHE BOOL "Disable system brotli and use internal brotli library instead." FORCE)
    set(FT_DISABLE_PNG ON CACHE BOOL "Disable system png and use internal png library instead." FORCE)
    set(FT_DISABLE_BZIP2 ON CACHE BOOL "Disable support of bzip2 compressed fonts." FORCE)
    add_subdirectory(thirdparty/freetype)
endif()