# Build the spdp library
add_library(spdp
  spdp.c
)

# Add relevant paths to includes
target_include_directories(spdp PRIVATE
  include
)


