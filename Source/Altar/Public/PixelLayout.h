#pragma once
#include "CoreMinimal.h"
#include "PixelLayout.generated.h"

UENUM()
enum class PixelLayout : uint32 {
    LAY_PALETTIZED_8,
    LAY_HIGH_COLOR_16,
    LAY_TRUE_COLOR_32,
    LAY_COMPRESSED,
    LAY_BUMPMAP,
    LAY_PALETTIZED_4,
    LAY_DEFAULT,
    LAY_SINGLE_COLOR_8,
    LAY_SINGLE_COLOR_16,
    LAY_SINGLE_COLOR_32,
    LAY_DOUBLE_COLOR_32,
    LAY_DOUBLE_COLOR_64,
    LAY_FLOAT_COLOR_32,
    LAY_FLOAT_COLOR_64,
    LAY_FLOAT_COLOR_128,
    LAY_SINGLE_COLOR_4,
    LAY_DEPTH_24_X8,
};

