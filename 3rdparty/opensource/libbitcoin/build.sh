#!/bin/bash

source param.mk

CURDIR=`pwd`
TOPDIR=${CURDIR}/../../..



#if [ -d ${DIRNAME} ]; then
#    rm -rf ${DIRNAME}
#fi

if [ -d ${INSTALLDIR} ]; then
    rm -rf ${INSTALLDIR}
fi

mkdir ${INSTALLDIR}

#git clone ${DOWNLOADURL}

# build lib
cd ${DIRNAME}
./autogen.sh
export secp256k1_CFLAGS=-I${TOPDIR}/3rdparty/prebuild/secp256k1/include
export secp256k1_LIBS=${TOPDIR}/3rdparty/prebuild/secp256k1/lib
./configure --prefix=${CURDIR}/${INSTALLDIR} --disable-shared --enable-static --without-examples
make
make install
cd ..

# copy libs and include
cp -rf ${INSTALLDIR}/lib/ ${CURDIR}/../../prebuild/libbitcoin
cp -rf ${INSTALLDIR}/include/ ${CURDIR}/../../prebuild/libbitcoin