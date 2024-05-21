add_library(MathFunctions MathFunctions.cxx mysqrt.cxx)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
endif()


add_library(SqrtLibrary STATIC mysqrt.cxx )

  # TODO 6: Link SqrtLibrary to tutorial_compiler_flags

  target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()


add_library(MathFunctions MathFunctions.cxx)

