include_directories(
	${TOPDIR}/base/compat/include/
	${TOPDIR}/base/crypto/include/
)

file(GLOB_RECURSE HEADERFILES "../include/*")
aux_source_directory(. DIR_SRCS)
aux_source_directory(ctaes DIR_SRCS)
add_library(crypto ${DIR_SRCS} ${HEADERFILES})