/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _SHADERTEXDESC_H_
#define _SHADERTEXDESC_H_

#include "NIF_IO.h"
#include "gen/TexDesc.h"

/*!
 * An extended texture description for shader textures.
 */
struct ShaderTexDesc {
  /*! Default Constructor */
  ShaderTexDesc();
  /*! Default Destructor */
  ~ShaderTexDesc();
  /*!
   * Is it used?
   */
  bool isUsed;
  /*!
   * The texture data.
   */
  TexDesc textureData;
  /*!
   * Unknown.
   */
  uint unknownInt;
};

#endif