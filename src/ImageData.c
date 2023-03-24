/*****************************************************************************
* | File      	:   ImageData.c
* | Author      :   Waveshare team
* | Function    :	
*----------------
* |	This version:   V1.1
* | Date        :   2019-06-12
* | Info        :
*
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

******************************************************************************/

#include "ImageData.h"

const unsigned char gImage_2in9[] = { /* 0X00,0X01,0X80,0X00,0X28,0X01, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XCF,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0X80,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0X7F,0XF2,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3C,0XFF,0XE0,0X05,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X79,0XFF,0XC3,0XB2,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7B,0XFF,0XC7,0XD8,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7B,0XFF,0X8E,0XCC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XF3,0XFF,0X8D,0XEC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XF7,0XFF,0X89,0X6E,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0XFF,0X8A,0XEE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X1E,0XF3,0XFF,0X8C,0XEC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X8E,0X73,0XFF,0X89,0XCC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XAF,0X7B,0XFF,0X87,0XD8,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC7,0X79,0XFF,0XD3,0XB2,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XD7,0X3C,0XFF,0XE8,0X25,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XBE,0X7F,0XF2,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XEB,0X9F,0X80,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XCF,0XE8,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF5,0XA7,0XFD,0X04,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XB1,0XFC,0X01,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFA,0X3C,0X3C,0X3E,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X6F,0X01,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X2F,0XFF,0XFD,0X9F,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X8F,0XFF,0XFD,0XBF,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0XE7,0XFF,0XFB,0X3F,0XF0,0X0B,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XF7,0XFF,0XFB,0X7F,0XC0,0X79,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0XF7,0XFF,0XFE,0X7E,0X01,0XFD,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0XF3,0XFF,0XF6,0XF8,0X0F,0XFD,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XF7,0XFF,0XFC,0XC0,0X7F,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF6,0X77,0XFF,0XEC,0X01,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE6,0X0F,0XFF,0XF8,0X0F,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XEE,0XFF,0XFF,0XC0,0X3F,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XED,0XFF,0XFF,0X01,0XFF,0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDD,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X93,0XFF,0XF9,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X27,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0X7F,0XFE,0XFF,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0X4F,0XFA,0X7F,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XDB,0XFF,0X7F,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFA,0XFF,0X3F,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3E,0XF2,0X1F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XBE,0X9F,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XE4,0X8F,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFD,0XCF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X39,0XC7,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8B,0XC3,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XE3,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XE1,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0X8F,0XDF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,0XFE,0X3F,0XCF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XFF,0XFF,0XE7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X3F,0XFC,0XFF,0XFF,0XF7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X3F,0XF1,0XFF,0XFF,0XF7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X3F,0X87,0XFF,0XFD,0XF7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X3E,0X3F,0XFF,0XDE,0XF3,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X31,0XFF,0XFF,0XDE,0XFB,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X07,0XFF,0XFD,0XEE,0XFB,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFD,0XEE,0XFB,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X1F,0XFF,0XFD,0XEE,0XFB,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFE,0XEE,0XFB,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0XFF,0XFE,0XEF,0X7B,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,0XFE,0XEF,0X7B,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XFE,0XEF,0X79,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XFE,0XF7,0X7D,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC3,0XFF,0XFE,0XF7,0X7D,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC3,0XFF,0XFE,0XF7,0X7D,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0XFF,0XC1,0XFF,0XFF,0X77,0XBD,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X18,0X0F,0XE1,0XFF,0XFF,0X77,0XFE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0XF1,0XE1,0XFF,0XFF,0X77,0XFE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X07,0XFC,0X71,0XFF,0XFF,0X7F,0XFE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X07,0XFF,0X91,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X03,0XFF,0XC1,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X03,0XFF,0XC1,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X03,0XFF,0X81,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X01,0XFF,0X80,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X01,0XFF,0X80,0X7F,0XFF,0XFC,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X01,0XFF,0X00,0X3F,0XFF,0XF0,0X1F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X03,0XFF,0X00,0X1F,0XFF,0X80,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X03,0XFF,0X00,0X0F,0XFE,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X02,0X7F,0X00,0X07,0XF0,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X06,0XFF,0X00,0X07,0X80,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X80,0X00,0X0C,0XFF,0X00,0X02,0X03,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X90,0X00,0X1D,0XFF,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC1,0X9C,0X00,0X3B,0XFF,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC1,0X8F,0X00,0XE7,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC1,0X0F,0XFF,0XCF,0XFF,0X80,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC1,0X0F,0XCC,0X3F,0XFF,0X80,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X83,0X0F,0X80,0XFF,0XFF,0X80,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X83,0X0F,0XBF,0XFF,0XFF,0XC0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X83,0X0F,0XBF,0XFF,0XFF,0XC0,0X00,0X3F,0XF9,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X83,0X0F,0XBF,0XFF,0XFF,0XE0,0X00,0X3F,0XF0,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X87,0X0F,0XBF,0XFF,0XFF,0XF0,0X00,0X1F,0XE1,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X06,0X0F,0X3F,0XFF,0XFF,0XF8,0X00,0X1F,0XE9,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X06,0X0F,0X3F,0XFF,0XFF,0XFC,0X00,0X1F,0XE6,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X06,0X0F,0X3F,0XFF,0XFF,0XE6,0X00,0X0F,0XF0,0X5F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X06,0X0F,0X4F,0XFF,0XFF,0X8F,0X80,0X0F,0XF8,0X0F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X0E,0X0F,0X70,0X7F,0XFE,0X3F,0XF0,0X07,0XF8,0X2F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X0E,0X0E,0X7E,0X01,0XFC,0XFF,0XFF,0X07,0XFD,0X57,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X0C,0X0E,0XFF,0XFC,0XF3,0XFF,0XFF,0XF7,0XFE,0X83,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X0C,0X0E,0XFF,0XFE,0X4F,0XFC,0X7F,0XFB,0XFE,0X0B,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0X1C,0X0E,0XFF,0XFF,0X3F,0XE1,0XFF,0XFB,0XFF,0X55,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0X1C,0X0E,0XFF,0XFC,0XFF,0X0F,0XFF,0XF9,0XFF,0XA8,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0X1C,0X04,0XFF,0XF1,0XF8,0X7F,0XFF,0XFD,0XFF,0X80,0X7F,0XFF,
0XFF,0XFF,0XFF,0XF8,0X3C,0X24,0XFF,0XC7,0XC3,0XFF,0XFF,0XFD,0XFF,0XD5,0X7F,0XFF,
0XFF,0X1F,0XFF,0XF8,0X38,0X25,0XFF,0X1F,0X1F,0XFF,0XFF,0XFE,0XFF,0XEA,0XBF,0XFF,
0XFE,0X0F,0XFF,0XF0,0X38,0X25,0XFC,0X70,0X7F,0XFF,0XFF,0XFE,0XFF,0XE0,0X1F,0XFF,
0XFE,0X0F,0XFF,0XF0,0X78,0X75,0XF9,0XC4,0XCF,0XFF,0XFF,0XFE,0X7F,0XF4,0X5F,0XFF,
0XFE,0X0F,0XFF,0XE0,0X78,0X71,0XF2,0X19,0XEF,0XFF,0XFF,0XFF,0X7F,0XFA,0XAF,0XFF,
0XFF,0X0F,0XFF,0XE0,0XF8,0XF3,0XF8,0XF3,0XEF,0XFF,0XFF,0XC0,0X67,0XFC,0X07,0XFF,
0XFF,0X07,0XFF,0XC0,0XF8,0XFF,0XFF,0XE7,0X87,0XFF,0XFF,0X80,0X0F,0XFC,0X17,0XFF,
0XFF,0X03,0XFF,0X81,0XF1,0XFF,0XFF,0XCF,0X37,0XFF,0XFF,0X00,0X31,0XFE,0XAB,0XFF,
0XFF,0X81,0XFF,0X03,0XF9,0XF7,0XFF,0X9C,0XF3,0XFF,0XFF,0X00,0X07,0XFF,0X41,0XFF,
0XFF,0X80,0X7C,0X03,0XFF,0XE0,0X01,0X39,0XFB,0XFC,0XFF,0X00,0X1F,0XFF,0X01,0XFF,
0XFF,0XC0,0X00,0X07,0XFF,0XEF,0XF8,0X60,0X0B,0XF9,0XF3,0X00,0X03,0XFF,0XA1,0XFF,
0XFF,0XE0,0X00,0X0F,0XFF,0XEF,0XFC,0XCF,0X03,0XF3,0X8F,0X00,0X0F,0XFF,0XC4,0XFF,
0XFF,0XF0,0X00,0X1F,0XFF,0XEF,0XFD,0X3F,0XFB,0XC7,0X4F,0X00,0X0F,0XFF,0XCC,0XFF,
0XFF,0XFC,0X00,0X7F,0XFF,0XEF,0XFC,0X7F,0XF7,0X07,0XC7,0X00,0X0F,0XFF,0XF0,0XFF,
0XFF,0XFF,0X01,0XFF,0XFF,0XEF,0XFF,0XFF,0XF6,0X03,0XCC,0X00,0X07,0XFF,0XFC,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XF4,0X01,0XF0,0X00,0X07,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XCF,0XFF,0XFF,0XE0,0X00,0X00,0X03,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XCF,0XFF,0XFF,0X98,0X00,0X00,0X03,0XC1,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XCF,0XFF,0XFF,0XF0,0X00,0X00,0X0F,0XF1,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XE6,0X00,0X00,0X0F,0XFD,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0X00,0X00,0X5F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XC0,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XC0,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XC1,0XFF,0XDC,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE7,0XDF,0XFF,0XFF,0XFF,0XE1,0XFF,0XDF,0X83,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC7,0XDF,0XFF,0XFF,0XFF,0XE3,0XFF,0XDF,0XF9,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XB7,0XDF,0XFF,0XFF,0XFF,0XE3,0XFF,0XDF,0XFD,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X07,0XDF,0XFF,0XFF,0XFF,0XF7,0XFF,0XDF,0XFD,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X67,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFB,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0XE7,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XFB,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0XEF,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XFB,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0XCF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XF3,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0XDF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XF7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF9,0X9F,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XF7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFB,0XBF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XF7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF3,0XBF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XE7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF7,0X3F,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XEF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF7,0X7F,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XEF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XEE,0X7F,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XEF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XEE,0X7F,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XCF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XCE,0X7F,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XDF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XDC,0X7F,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XDF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X9C,0X7F,0X3F,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0XDF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XB8,0X7F,0X7F,0XFF,0XFF,0XFF,0XFF,0XDE,0X7F,0XBF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XB8,0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XDC,0XFF,0XBF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X70,0XFF,0X00,0X0F,0XFF,0XFF,0XFF,0XD9,0XFF,0XBF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X71,0XFF,0XFE,0X80,0X01,0XFF,0XFF,0XD3,0XFF,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X71,0XFF,0XFE,0XFF,0XF0,0X00,0X3F,0XCF,0XFF,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X63,0XFF,0XFD,0XFF,0XFF,0XFE,0X00,0X1F,0XFF,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X07,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0XCF,0XFF,0XFF,0X07,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XF0,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC1,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFB,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0XFB,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7B,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X03,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
};
