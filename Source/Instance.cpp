#include "Instance.hpp"

UntitledImageViewer::Instance::Instance()
{

}

void UntitledImageViewer::Instance::begin()
{
    beginAutohandle();

}

void UntitledImageViewer::Instance::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledImageViewer::Instance::end()
{
    endAutohandle();

}

UntitledImageViewer::Instance::~Instance()
{

}

void UntitledImageViewer::Instance::onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io)
{

}
