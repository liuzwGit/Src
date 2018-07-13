###########################################################
#	fn:转换编码并打印
#	aiuthor:liuzw
#	time:2018-05-27
###########################################################
help:
	@echo "make utf82utf8"
	@echo "make gbk2utf8"

utf82utf8:
	gcc -finput-charset=UTF-8 -fexec-charset=UTF-8 testEcode.c -o testEcode
	mv testEcode utf82utf8
	#iconv -f UTF-8 -t UTF-8 testEcode.c -o testEcode.c

utf82gbk:
	gcc -finput-charset=UTF-8 -fexec-charset=GBK testEcode.c -o testEcode
	mv testEcode utf82gbk
	#iconv -f UTF-8 -t UTF-8 testEcode.c -o testEcode.c

all:help

.PHONY:clean
clean:
	rm -f *.o 
	rm -f utf82utf8
	rm -f gbk2utf8
