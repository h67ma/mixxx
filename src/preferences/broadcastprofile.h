// broadcastprofile.h
// Created June 2nd 2017 by Stéphane Lepin <stephane.lepin@gmail.com>

#ifndef BROADCASTPROFILE_H
#define BROADCASTPROFILE_H

#include <QString>

class BroadcastProfile {
    public:
      explicit BroadcastProfile(const QString& profileName);
      void save(const QString& filename);

      static BroadcastProfile* BroadcastProfile::loadFromFile(
              const QString& filename);
      static bool BroadcastProfile::checkNameCompliance(const QString& str);

      void setProfileName(const QString& profileName);
      QString getProfileName() const;

      bool getEnabled() const;
      void setEnabled(bool value);

      QString getHost() const;
      void setHost(const QString& value);

      int getPort() const;
      void setPort(int value);

      QString getServertype() const;
      void setServertype(const QString& value);

      QString getLogin() const;
      void setLogin(const QString& value);

      QString getPassword() const;
      void setPassword(const QString& value);

      bool getEnableReconnect() const;
      void setEnableReconnect(bool value);

      double getReconnectPeriod() const;
      void setReconnectPeriod(double value);

      bool getLimitReconnects() const;
      void setLimitReconnects(bool value);

      int getMaximumRetries() const;
      void setMaximumRetries(int value);

      bool getNoDelayFirstReconnect() const;
      void setNoDelayFirstReconnect(bool value);

      double getReconnectFirstDelay() const;
      void setReconnectFirstDelay(double value);

      QString getFormat() const;
      void setFormat(const QString& value);

      int getBitrate() const;
      void setBitrate(int value);

      int getChannels() const;
      void setChannels(int value);

      QString getMountpoint() const;
      void setMountPoint(const QString& value);

      QString getStreamName() const;
      void setStreamName(const QString& value);

      QString getStreamDesc() const;
      void setStreamDesc(const QString& value);

      QString getStreamGenre() const;
      void setStreamGenre(const QString& value);

      bool getStreamPublic() const;
      void setStreamPublic(bool value);

      QString getStreamWebsite() const;
      void setStreamWebsite(const QString& value);

      bool getEnableMetadata() const;
      void setEnableMetadata(bool value);

      QString getMetadataCharset() const;
      void setMetadataCharset(const QString& value);

      QString getCustomArtist() const;
      void setCustomArtist(const QString& value);

      QString getCustomTitle() const;
      void setCustomTitle(const QString& value);

      QString getMetadataFormat() const;
      void setMetadataFormat(const QString& value);

      bool getOggDynamicUpdate() const;
      void setOggDynamicUpdate(bool value);

    private:
      void setDefaultValues();
      void loadValues(const QString& filename);
      void defaultValues();

      QString m_profileName;

      bool m_enabled;

      QString m_host;
      int m_port;
      QString m_serverType;
      QString m_login;
      QString m_password;

      bool m_enableReconnect;
      double m_reconnectPeriod;
      bool m_limitReconnects;
      int m_maximumRetries;
      bool m_noDelayFirstReconnect;
      double m_reconnectFirstDelay;

      QString m_mountpoint;
      QString m_streamName;
      QString m_streamDesc;
      QString m_streamGenre;
      bool m_streamPublic;
      QString m_streamWebsite;

      QString m_format;
      int m_bitrate;
      int m_channels;

      bool m_enableMetadata;
      QString m_metadataCharset;
      QString m_customArtist;
      QString m_customTitle;
      QString m_metadataFormat;
      bool m_oggDynamicUpdate;
};

#endif // BROADCASTPROFILE_H
