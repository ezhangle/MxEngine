// Copyright(c) 2019 - 2020, #Momo
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
// 
// 1. Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and /or other materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once
#include <string>

#include "Utilities/Memory/Memory.h"
#include "Platform/GraphicAPI.h"
#include "Utilities/Math/Math.h"

namespace MxEngine
{
	struct Material
	{
		TextureHandle AlbedoMap;
		TextureHandle SpecularMap;
		TextureHandle EmmisiveMap;
		TextureHandle TransparencyMap;
		TextureHandle NormalMap;
		TextureHandle HeightMap;

		float SpecularExponent = 128.0f;
		float Transparency = 1.0f;
		Vector3 AmbientColor{ 0.4f };
		Vector3 DiffuseColor{ 0.6f };
		Vector3 SpecularColor{ 0.2f };
		Vector3 EmmisiveColor{ 0.0f };

		float Displacement = 0.025f;
		float Reflection = 0.1f;
		Vector3 BaseColor{ 1.0f };
		MxString Name = "DefaultMaterial";
	};
}