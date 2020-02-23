##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=014_Challenge
ConfigurationName      :=Debug
WorkspacePath          :="D:/Self-learning/Udemy/Beginning C++ Programming - From Beginner to Beyond/CppWorkspace"
ProjectPath            :="D:/Self-learning/Udemy/Beginning C++ Programming - From Beginner to Beyond/CppWorkspace/Section013/014_Challenge"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=AnaS9
Date                   :=24/02/2020
CodeLitePath           :="D:/Program Files/CodeLite"
LinkerName             :=D:/MinGW/bin/g++.exe
SharedObjectLinkerName :=D:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="014_Challenge.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=D:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/MinGW/bin/ar.exe rcu
CXX      := D:/MinGW/bin/g++.exe
CC       := D:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++17 -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix) $(IntermediateDirectory)/Movie.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix): Movies.cpp $(IntermediateDirectory)/Movies.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Self-learning/Udemy/Beginning C++ Programming - From Beginner to Beyond/CppWorkspace/Section013/014_Challenge/Movies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Movies.cpp$(DependSuffix): Movies.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Movies.cpp$(DependSuffix) -MM Movies.cpp

$(IntermediateDirectory)/Movies.cpp$(PreprocessSuffix): Movies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Movies.cpp$(PreprocessSuffix) Movies.cpp

$(IntermediateDirectory)/Movie.cpp$(ObjectSuffix): Movie.cpp $(IntermediateDirectory)/Movie.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Self-learning/Udemy/Beginning C++ Programming - From Beginner to Beyond/CppWorkspace/Section013/014_Challenge/Movie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movie.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Movie.cpp$(DependSuffix): Movie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Movie.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Movie.cpp$(DependSuffix) -MM Movie.cpp

$(IntermediateDirectory)/Movie.cpp$(PreprocessSuffix): Movie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Movie.cpp$(PreprocessSuffix) Movie.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Self-learning/Udemy/Beginning C++ Programming - From Beginner to Beyond/CppWorkspace/Section013/014_Challenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


