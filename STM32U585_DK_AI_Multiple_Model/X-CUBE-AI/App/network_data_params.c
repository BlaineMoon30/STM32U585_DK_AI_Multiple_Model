/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Fri Aug  4 11:27:51 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[83] = {
  0x3d6ed214bdd24200U, 0x3e8a7905be0fa626U, 0xbdc7404a3dfae52dU, 0xbe1a343000000000U,
  0xbf82323abd528208U, 0x3ecfe11abeae34caU, 0x3f23f0cd3f948791U, 0x3ee7ccf1bbd2af00U,
  0x3f68a9ff3d4aaa43U, 0x3f371e8a3f252773U, 0x3e1a69a3be483331U, 0x3ecaed76bf340d41U,
  0xbf401070beb8fa10U, 0xbfb4c68d3f0df958U, 0x3f211027bd4dc2e9U, 0x3f467cbc3e03da00U,
  0x3d8faece3e279e15U, 0xbefd3790be39ca47U, 0xbf159445bf03534fU, 0x3e3d95973e294e7cU,
  0x3f1ee319bf218b0bU, 0xbcf60c923fa43227U, 0x3f1d4f0fbe09efb9U, 0x3eb248aebdf2ca4bU,
  0xbeaf2bb4becbfa61U, 0xbda3a118bec808edU, 0x3f44b390be4549a0U, 0x3f428ef2bdeffa8eU,
  0xbd7951aa3f6999a4U, 0x395e1000bd9abbdbU, 0xbf270d16be2700f0U, 0x3e3f4eccbf22d937U,
  0x3bc74e80bef0be8cU, 0x3f01d555bef04647U, 0x3e0cfc983e937f60U, 0xbee49383bf0f07e2U,
  0x3f2377b0bd812ac6U, 0x3eb62504U, 0xbda4352bbe1f0cefU, 0xbe92a3b6bdbca8cbU,
  0x3f05d59aU, 0x3e38d9c000000000U, 0xbeea2334be85bff7U, 0x3ecef41d3e27da47U,
  0x3eb9433abd6c6d63U, 0xbef499e5bf2d6774U, 0x3ec8b9f53e89b1a2U, 0xbee42ffa3e9ae37eU,
  0x3f0b27993db25481U, 0xbde062e73f05356fU, 0xbd1220203e536a53U, 0xbeb560c7be868998U,
  0x3e702078bfd6b128U, 0x3f17b5283f940f2fU, 0x3e80acdf3e653443U, 0xbedb12c23e98cfbfU,
  0xbea3775b3f0cc432U, 0xbe9039b2bf858760U, 0xbeb22700bf19804eU, 0xbeaa4adabf19f73fU,
  0xbe870b923ed43dbcU, 0x3f1ee6153e9f0a0aU, 0x3ee8c854bf40eca3U, 0x3bf4ccbbbf5593baU,
  0xbf5c2eadbc7ce200U, 0xbe2d8a583f1671fdU, 0x3c7ec5553ef85610U, 0xbee3b4bf3f41d2d2U,
  0xbe940428bd22e197U, 0x3ef234c63d9fb926U, 0xbd2d95a03f0e8540U, 0x3e54ace3bee6e2aaU,
  0xbe0f63483fb13c94U, 0x3b335e003db85348U, 0x3c4f5ac0bf0f153dU, 0xbea0647c3d045710U,
  0xbf0927323ee45988U, 0x3e191438bef81630U, 0xbd1648263f28f1ffU, 0x3e2eb33f3f01d0c5U,
  0x3f0cfc743c3478aeU, 0x3ebe9deabed04e46U, 0x3f592853U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

