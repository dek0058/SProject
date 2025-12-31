// Copyright (c) 2025 cannot206.

#include "MyUserWidget.h"

#if WITH_EDITOR
const FText UMyUserWidget::GetPaletteCategory()
{
	return FText::FromString(TEXT("My UI"));
}
#endif
