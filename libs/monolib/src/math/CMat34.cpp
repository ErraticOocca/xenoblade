#include "monolib/math/CMat34.hpp"
#include "monolib/math.hpp"
#include "monolib/math/Utility.hpp"
#include "nw4r/math/math_arithmetic.h"

namespace ml{
    //TODO: see if it's possible to have these use arrays instead
    CMat34 CMat34::zero = CMat34(
    0,0,0,0,
    0,0,0,0,
    0,0,0,0
    );

    CMat34 CMat34::identity = CMat34(
    1,0,0,0,
    0,1,0,0,
    0,0,1,0
    );

    void CMat34::func_80436260(const float fIn1, const float fIn2) {
        // TODO: for debugging
        typedef volatile float vf;

        // Get rotation angle (for axis/angle or TODO) from rotation matrix
        // 8066A248: 1.0f
        // 8066A244: 0.5
        // 8066A24C: -1.0f
        const float CosAngleRad = (calcTrace() - 1.0f) * 0.5f;

        // volatile CMat34* r29_1 = this;
        vf r5_1 = fIn2;

        // 805262F0: (lis) 16 bit signed, left shift?) 29810 (TODO: ?? 
        //      string pointer for NW4R_WARNING()? looks likeit)
        // 805262C8: (lis) 16739 (similar to above)

        vf rotationAngleRad = ml::math::acos(CosAngleRad);

        // TODO: check against pi to see if the rotation is singular?
        // 8066A240: 0.0f
        // 8066A1F8: ml::math::pi OR PI (with rounding, it's the same)
        if (r5_1 > 0.0f) {
            if (r5_1 >= ml::math::pi) {
                // TODO: by this point, r29 is the this pointer
                // TODO: computing the axis?: 1 / (2*sin(theta) * [R32-R23; R13-R31; R21-R12])
                vf f4 = m[2][1] - m[1][2];
                vf f2 = m[1][0] - m[0][1];
                vf f1 = m[0][2] - m[2][0];

                // TODO: elements of the axis are here, but not normalized yet;
                // do that after more checks?

                vf f3 = nw4r::math::FAbs(f4);

                // 8066A208: 9.99999997e-07 (probably 1e-6: ml::math::epsilon)
                if (f3 < ml::math::epsilon) {
                    // ?? stopped at/after line 0x124
                }
                NW4R_WARNING("");


                // ...
                Vec temp1;
                PSVECNormalize(&temp1, &temp1);
            }
            else {
                // 80526324: (lis) 24946 (??)
                // 80526300: (lis) 18003

                // ...
                NW4R_WARNING("");
                // ...
                ml::math::sqrtf(0.0f);
            }


            
            // ...
            NW4R_WARNING("");
            // ...
            ml::math::sqrtf(0.0f);
            // ...
            NW4R_WARNING("");
            // ...
            ml::math::sqrtf(0.0f);
            // ...
            NW4R_WARNING("");
            // ...
            ml::math::sqrtf(0.0f);
            // ...
        }
        else {

        }

    }
    
    /*
    void CMat34::func_804366C0() {
        // ...
        NW4R_WARNING("");
        // ...
        ml::math::sqrtf(0.0f);
        // ...
        NW4R_WARNING("");
        // ...
        NW4R_WARNING("");
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
    }

    void CMat34::func_8043692C() {
        // ...
        NW4R_WARNING("");
        // ...
        ml::math::sqrtf(0.0f);
        // ...
        NW4R_WARNING("");
        // ...
        NW4R_WARNING("");
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
    }

    void CMat34::func_80436B98() {
        // ...
        NW4R_WARNING("");
        // ...
        ml::math::sqrtf(0.0f);
        // ...
        NW4R_WARNING("");
        // ...
        NW4R_WARNING("");
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
        ml::math::atan2(0.0f, 0.0f);
        // ...
    }
    */
} //namespace ml
