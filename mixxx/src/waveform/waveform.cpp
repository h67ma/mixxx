#include "waveform.h"
#include <string>

Waveform::Waveform()
{
}

Waveform::~Waveform()
{
}

void Waveform::resize( int size)
{
    for (int i = 0; i < FilteredTypeCount; ++i)
        m_data[i].resize(size);
}

void Waveform::reset( unsigned char value)
{
    for (int i = 0; i < FilteredTypeCount; ++i)
        m_data[i].fill(value);
}

void Waveform::assign( int size, unsigned char value)
{
    for (int i = 0; i < FilteredTypeCount; ++i)
        m_data[i].fill(value,size);
}
