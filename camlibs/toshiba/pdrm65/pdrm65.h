#include <gphoto2.h>
#include <string.h>
#include <gphoto2-endian.h>

int pdrm65_init(GPPort *);
int pdrm65_get_filenames(GPPort *, CameraList *);
int pdrm65_select_file(GPPort *, int);
int pdrm65_get_pict(GPPort *, const char *,CameraFile *);

#define JPEG_CHUNK 30656
