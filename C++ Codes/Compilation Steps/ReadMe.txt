In Windows:
1.Create Any CPP file lets say here we are creating HelloWorld.cpp. For this- A) Goto your desired directory RightClick->New->Text Document-> give name as "HelloWorld.Cpp" dont forget to change extension -> It will open into Visual Studio Editor->Write down the program and save

2.Open Developer Command Prompt by searching in windows 10 (Must installed visual studio)->Redirect to your Directory by using "cd" command-> Give command as:
	cl.exe /c /EHsc <Your Cpp name>.cpp
        eg. cl.exe /c /EHsc HelloWorld.cpp

here /c for complie only,now a days in any build system for convinience compiler is doing work of linker also. But in above command due to /c switch it only compile code and generate .obj file. /EHsc stands for Exception Handling Synchronous Catch

3.after above command you will observe .obj file generated. to generate .exe file give following command:
	link.exe <obj file name>.obj
	eg. link.exe HelloWorld.obj
it will generate .exe file

4.Now Enjoy your output by just typing your exe file name on Command prompt it will print 
  Hello World!!!

5. Insted of giving above two command you can use single command as specified above Compiler is acting as linker so by using command below you can simply skip link.exe command
	cl.exe /EHsc <Cpp file name>.cpp
	eg. cl.exe /EHsc HelloWorld.cpp


*****************************************************************************************************
In Linux:

Coming soon......
