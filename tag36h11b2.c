#include "tag36h11b2.h"

#include <stdlib.h>
#include "tag36h11.h"

apriltag_family_t *tag36h11b2_create()
{
    apriltag_family_t *tf_tag36h11 = tag36h11_create();

    apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
    tf->name = strdup("tag36h11b2");
    tf->h = tf_tag36h11->h;
    tf->ncodes = tf_tag36h11->ncodes;
    tf->codes = tf_tag36h11->codes;
    tf->nbits = tf_tag36h11->nbits;
    tf->bit_x = calloc(tf->nbits, sizeof(uint32_t));
    tf->bit_y = calloc(tf->nbits, sizeof(uint32_t));
    for (uint32_t i = 0; i < tf_tag36h11->nbits; ++i)
    {
        tf->bit_x[i] = tf_tag36h11->bit_x[i] + 1;
        tf->bit_y[i] = tf_tag36h11->bit_y[i] + 1;
    }
    tf->width_at_border = tf_tag36h11->width_at_border + 2;
    tf->total_width = tf_tag36h11->total_width + 2;
    tf->reversed_border = tf_tag36h11->reversed_border;

    tag36h11_destroy(tf_tag36h11);

    return tf;
}

void tag36h11b2_destroy(apriltag_family_t *tf)
{
    free(tf->bit_x);
    free(tf->bit_y);
    free(tf->name);
    free(tf);
}
