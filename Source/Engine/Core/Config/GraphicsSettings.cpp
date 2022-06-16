// Copyright (c) 2012-2022 Wojciech Figat. All rights reserved.

#include "GraphicsSettings.h"
#include "Engine/Graphics/Graphics.h"

void GraphicsSettings::Apply()
{
    Graphics::UseVSync = UseVSync;
    Graphics::AAQuality = AAQuality;
    Graphics::SSRQuality = SSRQuality;
    Graphics::SSAOQuality = SSAOQuality;
    Graphics::VolumetricFogQuality = VolumetricFogQuality;
    Graphics::ShadowsQuality = ShadowsQuality;
    Graphics::ShadowMapsQuality = ShadowMapsQuality;
    Graphics::AllowCSMBlending = AllowCSMBlending;
    Graphics::DefaultProbeResolution = (int32)DefaultProbeResolution;
    Graphics::GlobalSDFQuality = GlobalSDFQuality;
    Graphics::GIQuality = GIQuality;
    Graphics::GlobalSurfaceAtlasResolution = GlobalSurfaceAtlasResolution;
    Graphics::PostProcessSettings = PostProcessSettings;
}
