#ifndef _TAG36H11B2
#define _TAG36H11B2

#include "apriltag.h"

#ifdef __cplusplus
extern "C"
{
#endif

    // Hack to make AprilTag3 compatible with kaesss (kalibr)'s 2 bits border tags
    apriltag_family_t *tag36h11b2_create();
    void tag36h11b2_destroy(apriltag_family_t *tf);

#ifdef __cplusplus
}
#endif

#endif
