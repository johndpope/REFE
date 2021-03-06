#############################################################################
# Makefile for building: libHeapAnalyzer.so
# Generated by qmake (2.01a) (Qt 4.8.7) on: Mon Dec 12 06:30:19 2016
# Project:  HeapAnalyzer.pro
# Template: lib
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile HeapAnalyzer.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_PLUGIN -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -m64 -pipe -std=c++11 -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I../../include/os/unix -I../../include -I../../include/arch/x86-generic -I.release-shared/moc -I.release-shared/uic
LINK          = g++
LFLAGS        = -m64 -Wl,-O1 -shared
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = .release-shared/obj/

####### Files

SOURCES       = HeapAnalyzer.cpp \
		DialogHeap.cpp \
		ResultViewModel.cpp .release-shared/moc/moc_HeapAnalyzer.cpp \
		.release-shared/moc/moc_DialogHeap.cpp \
		.release-shared/moc/moc_ResultViewModel.cpp
OBJECTS       = .release-shared/obj/HeapAnalyzer.o \
		.release-shared/obj/DialogHeap.o \
		.release-shared/obj/ResultViewModel.o \
		.release-shared/obj/moc_HeapAnalyzer.o \
		.release-shared/obj/moc_DialogHeap.o \
		.release-shared/obj/moc_ResultViewModel.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../../qmake/clean-objects.pri \
		../../qmake/c++11.pri \
		../../qmake/qt5-gui.pri \
		../../common.pri \
		../plugins-x86_64.pri \
		../plugins.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/dll.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		HeapAnalyzer.pro
QMAKE_TARGET  = HeapAnalyzer
DESTDIR       = ../../
TARGET        = libHeapAnalyzer.so
TARGETD       = libHeapAnalyzer.so

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile  ../../$(TARGET)

../../$(TARGET): .release-shared/uic/ui_DialogHeap.h $(OBJECTS) $(SUBLIBS) $(OBJCOMP)  
	@$(CHK_DIR_EXISTS) ../../ || $(MKDIR) ../../ 
	-$(DEL_FILE) $(TARGET)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS) $(OBJCOMP)
	-$(MOVE) $(TARGET) ../../



Makefile: HeapAnalyzer.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../../qmake/clean-objects.pri \
		../../qmake/c++11.pri \
		../../qmake/qt5-gui.pri \
		../../common.pri \
		../plugins-x86_64.pri \
		../plugins.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/dll.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile HeapAnalyzer.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
../../qmake/clean-objects.pri:
../../qmake/c++11.pri:
../../qmake/qt5-gui.pri:
../../common.pri:
../plugins-x86_64.pri:
../plugins.pri:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/dll.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile HeapAnalyzer.pro

dist: 
	@$(CHK_DIR_EXISTS) .release-shared/obj/HeapAnalyzer1.0.0 || $(MKDIR) .release-shared/obj/HeapAnalyzer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .release-shared/obj/HeapAnalyzer1.0.0/ && $(COPY_FILE) --parents HeapAnalyzer.h DialogHeap.h ResultViewModel.h .release-shared/obj/HeapAnalyzer1.0.0/ && $(COPY_FILE) --parents HeapAnalyzer.cpp DialogHeap.cpp ResultViewModel.cpp .release-shared/obj/HeapAnalyzer1.0.0/ && $(COPY_FILE) --parents DialogHeap.ui .release-shared/obj/HeapAnalyzer1.0.0/ && (cd `dirname .release-shared/obj/HeapAnalyzer1.0.0` && $(TAR) HeapAnalyzer1.0.0.tar HeapAnalyzer1.0.0 && $(COMPRESS) HeapAnalyzer1.0.0.tar) && $(MOVE) `dirname .release-shared/obj/HeapAnalyzer1.0.0`/HeapAnalyzer1.0.0.tar.gz . && $(DEL_FILE) -r .release-shared/obj/HeapAnalyzer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) ../../libHeapAnalyzer.so
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) -r /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/HeapAnalyzer/.debug-shared/ /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/HeapAnalyzer/.release-shared/
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: .release-shared/moc/moc_HeapAnalyzer.cpp .release-shared/moc/moc_DialogHeap.cpp .release-shared/moc/moc_ResultViewModel.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) .release-shared/moc/moc_HeapAnalyzer.cpp .release-shared/moc/moc_DialogHeap.cpp .release-shared/moc/moc_ResultViewModel.cpp
.release-shared/moc/moc_HeapAnalyzer.cpp: HeapAnalyzer.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) HeapAnalyzer.h -o .release-shared/moc/moc_HeapAnalyzer.cpp

.release-shared/moc/moc_DialogHeap.cpp: ResultViewModel.h \
		DialogHeap.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) DialogHeap.h -o .release-shared/moc/moc_DialogHeap.cpp

.release-shared/moc/moc_ResultViewModel.cpp: ResultViewModel.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ResultViewModel.h -o .release-shared/moc/moc_ResultViewModel.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: .release-shared/uic/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) .release-shared/uic/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: .release-shared/uic/ui_DialogHeap.h
compiler_uic_clean:
	-$(DEL_FILE) .release-shared/uic/ui_DialogHeap.h
.release-shared/uic/ui_DialogHeap.h: DialogHeap.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic DialogHeap.ui -o .release-shared/uic/ui_DialogHeap.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

.release-shared/obj/HeapAnalyzer.o: HeapAnalyzer.cpp HeapAnalyzer.h \
		DialogHeap.h \
		ResultViewModel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .release-shared/obj/HeapAnalyzer.o HeapAnalyzer.cpp

.release-shared/obj/DialogHeap.o: DialogHeap.cpp DialogHeap.h \
		ResultViewModel.h \
		.release-shared/uic/ui_DialogHeap.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .release-shared/obj/DialogHeap.o DialogHeap.cpp

.release-shared/obj/ResultViewModel.o: ResultViewModel.cpp ResultViewModel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .release-shared/obj/ResultViewModel.o ResultViewModel.cpp

.release-shared/obj/moc_HeapAnalyzer.o: .release-shared/moc/moc_HeapAnalyzer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .release-shared/obj/moc_HeapAnalyzer.o .release-shared/moc/moc_HeapAnalyzer.cpp

.release-shared/obj/moc_DialogHeap.o: .release-shared/moc/moc_DialogHeap.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .release-shared/obj/moc_DialogHeap.o .release-shared/moc/moc_DialogHeap.cpp

.release-shared/obj/moc_ResultViewModel.o: .release-shared/moc/moc_ResultViewModel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .release-shared/obj/moc_ResultViewModel.o .release-shared/moc/moc_ResultViewModel.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/local/lib64/edb/ || $(MKDIR) $(INSTALL_ROOT)/usr/local/lib64/edb/ 
	-$(INSTALL_PROGRAM) "../../$(TARGET)" "$(INSTALL_ROOT)/usr/local/lib64/edb/$(TARGET)"
	-$(STRIP) --strip-unneeded "$(INSTALL_ROOT)/usr/local/lib64/edb/$(TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/usr/local/lib64/edb/$(TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/local/lib64/edb/ 


install:  install_target  FORCE

uninstall: uninstall_target   FORCE

FORCE:

