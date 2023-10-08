#pragma once
#include <stdio.h>
#include <errno.h>
#include "../utility/strings.h"

typedef struct _ifile {
  FILE* native;
  char* path;
  char* name;
  char* extension;
} ifile;