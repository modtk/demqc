#include "file.h"

ifile* ifile_new(char* path) {
  if(strvalid(path) == LESSTRUE) {
    return EINVAL;
  }
  ifile* file = malloc(sizeof(ifile));
  file->native = fopen(path, "r+");
  if(file->native == NULL) {
    return ENOENT;
  }
  return file;
}