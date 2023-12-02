// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLegacyCameraShake.h"

UMyLegacyCameraShake::UMyLegacyCameraShake()
{
	OscillationDuration = 0.25f;
	OscillationBlendInTime = 1.f;
	OscillationBlendOutTime = 1.f;

	RotOscillation.Pitch.Amplitude = 1.0f;
	RotOscillation.Pitch.Frequency = 0.5f;
	RotOscillation.Pitch.Frequency = EInitialOscillatorOffset::EOO_OffsetZero;
	RotOscillation.Pitch.Waveform = EOscillatorWaveform::SineWave;

	LocOscillation.Y.Amplitude = 1.0f;
	LocOscillation.Y.Frequency = 0.5f;
	LocOscillation.Y.InitialOffset = EInitialOscillatorOffset::EOO_OffsetZero;
	LocOscillation.Y.Waveform = EOscillatorWaveform::SineWave;
}
