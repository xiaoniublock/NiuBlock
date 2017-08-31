include_directories(
	${TOPDIR}/base/base/include/base
)

file(GLOB_RECURSE HEADERFILES "../include/*")
aux_source_directory(. DIR_SRCS)
add_library(base ${DIR_SRCS} ${HEADERFILES})