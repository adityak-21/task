Errors     << smb_highlevel_controller:make /home/aditya/task2/logs/smb_highlevel_controller/build.make.038.log
/usr/bin/ld: CMakeFiles/smb_highlevel_controller_node.dir/src/smb_highlevel_controller_node.cpp.o: in function `main':
smb_highlevel_controller_node.cpp:(.text+0x18a): undefined reference to `smb_highlevel_controller::SmbHighlevelController::SmbHighlevelController(ros::NodeHandle&)'
/usr/bin/ld: smb_highlevel_controller_node.cpp:(.text+0x1a3): undefined reference to `smb_highlevel_controller::SmbHighlevelController::~SmbHighlevelController()'
/usr/bin/ld: smb_highlevel_controller_node.cpp:(.text+0x263): undefined reference to `smb_highlevel_controller::SmbHighlevelController::~SmbHighlevelController()'
collect2: error: ld returned 1 exit status
make[2]: *** [CMakeFiles/smb_highlevel_controller_node.dir/build.make:114: /home/aditya/task2/devel/.private/smb_highlevel_controller/lib/smb_highlevel_controller/smb_highlevel_controller_node] Error 1
make[1]: *** [CMakeFiles/Makefile2:165: CMakeFiles/smb_highlevel_controller_node.dir/all] Error 2
make[1]: *** Waiting for unfinished jobs....
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
make[2]: *** [CMakeFiles/SmbHighlevelController.dir/build.make:114: /home/aditya/task2/devel/.private/smb_highlevel_controller/lib/smb_highlevel_controller/SmbHighlevelController] Error 1
make[1]: *** [CMakeFiles/Makefile2:789: CMakeFiles/SmbHighlevelController.dir/all] Error 2
make: *** [Makefile:146: all] Error 2