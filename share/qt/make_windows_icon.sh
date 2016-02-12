#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/posex.ico

convert ../../src/qt/res/icons/posex-16.png ../../src/qt/res/icons/posex-32.png ../../src/qt/res/icons/posex-48.png ${ICON_DST}
