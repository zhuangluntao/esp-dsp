// Copyright 2018-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "dsls_fir.h"


esp_err_t dsls_fir_init_32f(fir_32f_t *fir, float *coeffs, float *delay, int N)
{
    fir->coeffs = coeffs;
    fir->delay = delay;
    fir->N = N;
    fir->pos = 0;

    for (int i = 0 ; i < N; i++) {
        fir->delay[i] = 0;
    }
    return ESP_OK;
}
