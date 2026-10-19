#pragma once
#include <vector>

/// <summary>
/// Abstract class for all events
/// </summary>
class Event
{
    public:
        virtual ~Event() = default;
};

class collisionEvent : public Event
{
public:
    int colEntity; // 1 - player / 2 - cpu / 3 - walls
    collisionEvent(int who) : colEntity(who) {}
};