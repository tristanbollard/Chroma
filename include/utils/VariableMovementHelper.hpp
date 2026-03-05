#pragma once

#include "GlobalNamespace/IVariableMovementDataProvider.hpp"
#include "GlobalNamespace/VariableMovementDataProvider.hpp"

struct VariableMovementW {
	float jumpDuration;
	float moveDuration;

	explicit VariableMovementW(GlobalNamespace::IVariableMovementDataProvider* provider)
			: jumpDuration(provider ? provider->get_jumpDuration() : 0.0F),
				moveDuration(provider ? provider->get_moveDuration() : 0.0F) {}

	explicit VariableMovementW(GlobalNamespace::VariableMovementDataProvider* provider)
			: jumpDuration(provider ? provider->get_jumpDuration() : 0.0F),
				moveDuration(provider ? provider->get_moveDuration() : 0.0F) {}
};