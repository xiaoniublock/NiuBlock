include_directories(
	${TOPDIR}/base/support/include/
	${TOPDIR}/base/support/include/support
)

file(GLOB_RECURSE HEADERFILES "../include/*")
aux_source_directory(. DIR_SRCS)
add_library(support ${DIR_SRCS} ${HEADERFILES})