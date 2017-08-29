include_directories(
	${TOPDIR}/base/compat/include/
)

file(GLOB_RECURSE HEADERFILES "../include/*")
aux_source_directory(. DIR_SRCS)
add_library(compat ${DIR_SRCS} ${HEADERFILES})