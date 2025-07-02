/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIInlineQueryResult.h
 *
 * This object represents one result of an inline query. Telegram clients currently support results of the following 20 types:  * [InlineQueryResultCachedAudio](https://core.telegram.org/bots/api/#inlinequeryresultcachedaudio) * [InlineQueryResultCachedDocument](https://core.telegram.org/bots/api/#inlinequeryresultcacheddocument) * [InlineQueryResultCachedGif](https://core.telegram.org/bots/api/#inlinequeryresultcachedgif) * [InlineQueryResultCachedMpeg4Gif](https://core.telegram.org/bots/api/#inlinequeryresultcachedmpeg4gif) * [InlineQueryResultCachedPhoto](https://core.telegram.org/bots/api/#inlinequeryresultcachedphoto) * [InlineQueryResultCachedSticker](https://core.telegram.org/bots/api/#inlinequeryresultcachedsticker) * [InlineQueryResultCachedVideo](https://core.telegram.org/bots/api/#inlinequeryresultcachedvideo) * [InlineQueryResultCachedVoice](https://core.telegram.org/bots/api/#inlinequeryresultcachedvoice) * [InlineQueryResultArticle](https://core.telegram.org/bots/api/#inlinequeryresultarticle) * [InlineQueryResultAudio](https://core.telegram.org/bots/api/#inlinequeryresultaudio) * [InlineQueryResultContact](https://core.telegram.org/bots/api/#inlinequeryresultcontact) * [InlineQueryResultGame](https://core.telegram.org/bots/api/#inlinequeryresultgame) * [InlineQueryResultDocument](https://core.telegram.org/bots/api/#inlinequeryresultdocument) * [InlineQueryResultGif](https://core.telegram.org/bots/api/#inlinequeryresultgif) * [InlineQueryResultLocation](https://core.telegram.org/bots/api/#inlinequeryresultlocation) * [InlineQueryResultMpeg4Gif](https://core.telegram.org/bots/api/#inlinequeryresultmpeg4gif) * [InlineQueryResultPhoto](https://core.telegram.org/bots/api/#inlinequeryresultphoto) * [InlineQueryResultVenue](https://core.telegram.org/bots/api/#inlinequeryresultvenue) * [InlineQueryResultVideo](https://core.telegram.org/bots/api/#inlinequeryresultvideo) * [InlineQueryResultVoice](https://core.telegram.org/bots/api/#inlinequeryresultvoice)
 */

#ifndef OAIInlineQueryResult_H
#define OAIInlineQueryResult_H

#include <QJsonObject>

#include "OAIInlineKeyboardMarkup.h"
#include "OAIInlineQueryResultArticle.h"
#include "OAIInlineQueryResultAudio.h"
#include "OAIInlineQueryResultCachedAudio.h"
#include "OAIInlineQueryResultCachedDocument.h"
#include "OAIInlineQueryResultCachedGif.h"
#include "OAIInlineQueryResultCachedMpeg4Gif.h"
#include "OAIInlineQueryResultCachedPhoto.h"
#include "OAIInlineQueryResultCachedSticker.h"
#include "OAIInlineQueryResultCachedVideo.h"
#include "OAIInlineQueryResultCachedVoice.h"
#include "OAIInlineQueryResultContact.h"
#include "OAIInlineQueryResultDocument.h"
#include "OAIInlineQueryResultGame.h"
#include "OAIInlineQueryResultGif.h"
#include "OAIInlineQueryResultLocation.h"
#include "OAIInlineQueryResultMpeg4Gif.h"
#include "OAIInlineQueryResultPhoto.h"
#include "OAIInlineQueryResultVenue.h"
#include "OAIInlineQueryResultVideo.h"
#include "OAIInlineQueryResultVoice.h"
#include "OAIInputMessageContent.h"
#include "OAIMessageEntity.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIInputMessageContent;
class OAIMessageEntity;
class OAIInlineKeyboardMarkup;

class OAIInlineQueryResult : public OAIObject {
public:
    OAIInlineQueryResult();
    OAIInlineQueryResult(QString json);
    ~OAIInlineQueryResult() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getAudioFileId() const;
    void setAudioFileId(const QString &audio_file_id);
    bool is_audio_file_id_Set() const;
    bool is_audio_file_id_Valid() const;

    OAIInputMessageContent getInputMessageContent() const;
    void setInputMessageContent(const OAIInputMessageContent &input_message_content);
    bool is_input_message_content_Set() const;
    bool is_input_message_content_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getDocumentFileId() const;
    void setDocumentFileId(const QString &document_file_id);
    bool is_document_file_id_Set() const;
    bool is_document_file_id_Valid() const;

    QString getGifFileId() const;
    void setGifFileId(const QString &gif_file_id);
    bool is_gif_file_id_Set() const;
    bool is_gif_file_id_Valid() const;

    QString getMpeg4FileId() const;
    void setMpeg4FileId(const QString &mpeg4_file_id);
    bool is_mpeg4_file_id_Set() const;
    bool is_mpeg4_file_id_Valid() const;

    QString getPhotoFileId() const;
    void setPhotoFileId(const QString &photo_file_id);
    bool is_photo_file_id_Set() const;
    bool is_photo_file_id_Valid() const;

    QString getStickerFileId() const;
    void setStickerFileId(const QString &sticker_file_id);
    bool is_sticker_file_id_Set() const;
    bool is_sticker_file_id_Valid() const;

    QString getVideoFileId() const;
    void setVideoFileId(const QString &video_file_id);
    bool is_video_file_id_Set() const;
    bool is_video_file_id_Valid() const;

    QString getVoiceFileId() const;
    void setVoiceFileId(const QString &voice_file_id);
    bool is_voice_file_id_Set() const;
    bool is_voice_file_id_Valid() const;

    QString getThumbnailUrl() const;
    void setThumbnailUrl(const QString &thumbnail_url);
    bool is_thumbnail_url_Set() const;
    bool is_thumbnail_url_Valid() const;

    QString getAudioUrl() const;
    void setAudioUrl(const QString &audio_url);
    bool is_audio_url_Set() const;
    bool is_audio_url_Valid() const;

    QString getPhoneNumber() const;
    void setPhoneNumber(const QString &phone_number);
    bool is_phone_number_Set() const;
    bool is_phone_number_Valid() const;

    QString getFirstName() const;
    void setFirstName(const QString &first_name);
    bool is_first_name_Set() const;
    bool is_first_name_Valid() const;

    QString getGameShortName() const;
    void setGameShortName(const QString &game_short_name);
    bool is_game_short_name_Set() const;
    bool is_game_short_name_Valid() const;

    QString getDocumentUrl() const;
    void setDocumentUrl(const QString &document_url);
    bool is_document_url_Set() const;
    bool is_document_url_Valid() const;

    QString getMimeType() const;
    void setMimeType(const QString &mime_type);
    bool is_mime_type_Set() const;
    bool is_mime_type_Valid() const;

    QString getGifUrl() const;
    void setGifUrl(const QString &gif_url);
    bool is_gif_url_Set() const;
    bool is_gif_url_Valid() const;

    double getLatitude() const;
    void setLatitude(const double &latitude);
    bool is_latitude_Set() const;
    bool is_latitude_Valid() const;

    double getLongitude() const;
    void setLongitude(const double &longitude);
    bool is_longitude_Set() const;
    bool is_longitude_Valid() const;

    QString getMpeg4Url() const;
    void setMpeg4Url(const QString &mpeg4_url);
    bool is_mpeg4_url_Set() const;
    bool is_mpeg4_url_Valid() const;

    QString getPhotoUrl() const;
    void setPhotoUrl(const QString &photo_url);
    bool is_photo_url_Set() const;
    bool is_photo_url_Valid() const;

    QString getAddress() const;
    void setAddress(const QString &address);
    bool is_address_Set() const;
    bool is_address_Valid() const;

    QString getVideoUrl() const;
    void setVideoUrl(const QString &video_url);
    bool is_video_url_Set() const;
    bool is_video_url_Valid() const;

    QString getVoiceUrl() const;
    void setVoiceUrl(const QString &voice_url);
    bool is_voice_url_Set() const;
    bool is_voice_url_Valid() const;

    QString getCaption() const;
    void setCaption(const QString &caption);
    bool is_caption_Set() const;
    bool is_caption_Valid() const;

    QString getParseMode() const;
    void setParseMode(const QString &parse_mode);
    bool is_parse_mode_Set() const;
    bool is_parse_mode_Valid() const;

    QList<OAIMessageEntity> getCaptionEntities() const;
    void setCaptionEntities(const QList<OAIMessageEntity> &caption_entities);
    bool is_caption_entities_Set() const;
    bool is_caption_entities_Valid() const;

    OAIInlineKeyboardMarkup getReplyMarkup() const;
    void setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup);
    bool is_reply_markup_Set() const;
    bool is_reply_markup_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    bool isShowCaptionAboveMedia() const;
    void setShowCaptionAboveMedia(const bool &show_caption_above_media);
    bool is_show_caption_above_media_Set() const;
    bool is_show_caption_above_media_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    qint32 getThumbnailWidth() const;
    void setThumbnailWidth(const qint32 &thumbnail_width);
    bool is_thumbnail_width_Set() const;
    bool is_thumbnail_width_Valid() const;

    qint32 getThumbnailHeight() const;
    void setThumbnailHeight(const qint32 &thumbnail_height);
    bool is_thumbnail_height_Set() const;
    bool is_thumbnail_height_Valid() const;

    QString getPerformer() const;
    void setPerformer(const QString &performer);
    bool is_performer_Set() const;
    bool is_performer_Valid() const;

    qint32 getAudioDuration() const;
    void setAudioDuration(const qint32 &audio_duration);
    bool is_audio_duration_Set() const;
    bool is_audio_duration_Valid() const;

    QString getLastName() const;
    void setLastName(const QString &last_name);
    bool is_last_name_Set() const;
    bool is_last_name_Valid() const;

    QString getVcard() const;
    void setVcard(const QString &vcard);
    bool is_vcard_Set() const;
    bool is_vcard_Valid() const;

    qint32 getGifWidth() const;
    void setGifWidth(const qint32 &gif_width);
    bool is_gif_width_Set() const;
    bool is_gif_width_Valid() const;

    qint32 getGifHeight() const;
    void setGifHeight(const qint32 &gif_height);
    bool is_gif_height_Set() const;
    bool is_gif_height_Valid() const;

    qint32 getGifDuration() const;
    void setGifDuration(const qint32 &gif_duration);
    bool is_gif_duration_Set() const;
    bool is_gif_duration_Valid() const;

    QString getThumbnailMimeType() const;
    void setThumbnailMimeType(const QString &thumbnail_mime_type);
    bool is_thumbnail_mime_type_Set() const;
    bool is_thumbnail_mime_type_Valid() const;

    double getHorizontalAccuracy() const;
    void setHorizontalAccuracy(const double &horizontal_accuracy);
    bool is_horizontal_accuracy_Set() const;
    bool is_horizontal_accuracy_Valid() const;

    qint32 getLivePeriod() const;
    void setLivePeriod(const qint32 &live_period);
    bool is_live_period_Set() const;
    bool is_live_period_Valid() const;

    qint32 getHeading() const;
    void setHeading(const qint32 &heading);
    bool is_heading_Set() const;
    bool is_heading_Valid() const;

    qint32 getProximityAlertRadius() const;
    void setProximityAlertRadius(const qint32 &proximity_alert_radius);
    bool is_proximity_alert_radius_Set() const;
    bool is_proximity_alert_radius_Valid() const;

    qint32 getMpeg4Width() const;
    void setMpeg4Width(const qint32 &mpeg4_width);
    bool is_mpeg4_width_Set() const;
    bool is_mpeg4_width_Valid() const;

    qint32 getMpeg4Height() const;
    void setMpeg4Height(const qint32 &mpeg4_height);
    bool is_mpeg4_height_Set() const;
    bool is_mpeg4_height_Valid() const;

    qint32 getMpeg4Duration() const;
    void setMpeg4Duration(const qint32 &mpeg4_duration);
    bool is_mpeg4_duration_Set() const;
    bool is_mpeg4_duration_Valid() const;

    qint32 getPhotoWidth() const;
    void setPhotoWidth(const qint32 &photo_width);
    bool is_photo_width_Set() const;
    bool is_photo_width_Valid() const;

    qint32 getPhotoHeight() const;
    void setPhotoHeight(const qint32 &photo_height);
    bool is_photo_height_Set() const;
    bool is_photo_height_Valid() const;

    QString getFoursquareId() const;
    void setFoursquareId(const QString &foursquare_id);
    bool is_foursquare_id_Set() const;
    bool is_foursquare_id_Valid() const;

    QString getFoursquareType() const;
    void setFoursquareType(const QString &foursquare_type);
    bool is_foursquare_type_Set() const;
    bool is_foursquare_type_Valid() const;

    QString getGooglePlaceId() const;
    void setGooglePlaceId(const QString &google_place_id);
    bool is_google_place_id_Set() const;
    bool is_google_place_id_Valid() const;

    QString getGooglePlaceType() const;
    void setGooglePlaceType(const QString &google_place_type);
    bool is_google_place_type_Set() const;
    bool is_google_place_type_Valid() const;

    qint32 getVideoWidth() const;
    void setVideoWidth(const qint32 &video_width);
    bool is_video_width_Set() const;
    bool is_video_width_Valid() const;

    qint32 getVideoHeight() const;
    void setVideoHeight(const qint32 &video_height);
    bool is_video_height_Set() const;
    bool is_video_height_Valid() const;

    qint32 getVideoDuration() const;
    void setVideoDuration(const qint32 &video_duration);
    bool is_video_duration_Set() const;
    bool is_video_duration_Valid() const;

    qint32 getVoiceDuration() const;
    void setVoiceDuration(const qint32 &voice_duration);
    bool is_voice_duration_Set() const;
    bool is_voice_duration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_audio_file_id;
    bool m_audio_file_id_isSet;
    bool m_audio_file_id_isValid;

    OAIInputMessageContent m_input_message_content;
    bool m_input_message_content_isSet;
    bool m_input_message_content_isValid;

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString m_document_file_id;
    bool m_document_file_id_isSet;
    bool m_document_file_id_isValid;

    QString m_gif_file_id;
    bool m_gif_file_id_isSet;
    bool m_gif_file_id_isValid;

    QString m_mpeg4_file_id;
    bool m_mpeg4_file_id_isSet;
    bool m_mpeg4_file_id_isValid;

    QString m_photo_file_id;
    bool m_photo_file_id_isSet;
    bool m_photo_file_id_isValid;

    QString m_sticker_file_id;
    bool m_sticker_file_id_isSet;
    bool m_sticker_file_id_isValid;

    QString m_video_file_id;
    bool m_video_file_id_isSet;
    bool m_video_file_id_isValid;

    QString m_voice_file_id;
    bool m_voice_file_id_isSet;
    bool m_voice_file_id_isValid;

    QString m_thumbnail_url;
    bool m_thumbnail_url_isSet;
    bool m_thumbnail_url_isValid;

    QString m_audio_url;
    bool m_audio_url_isSet;
    bool m_audio_url_isValid;

    QString m_phone_number;
    bool m_phone_number_isSet;
    bool m_phone_number_isValid;

    QString m_first_name;
    bool m_first_name_isSet;
    bool m_first_name_isValid;

    QString m_game_short_name;
    bool m_game_short_name_isSet;
    bool m_game_short_name_isValid;

    QString m_document_url;
    bool m_document_url_isSet;
    bool m_document_url_isValid;

    QString m_mime_type;
    bool m_mime_type_isSet;
    bool m_mime_type_isValid;

    QString m_gif_url;
    bool m_gif_url_isSet;
    bool m_gif_url_isValid;

    double m_latitude;
    bool m_latitude_isSet;
    bool m_latitude_isValid;

    double m_longitude;
    bool m_longitude_isSet;
    bool m_longitude_isValid;

    QString m_mpeg4_url;
    bool m_mpeg4_url_isSet;
    bool m_mpeg4_url_isValid;

    QString m_photo_url;
    bool m_photo_url_isSet;
    bool m_photo_url_isValid;

    QString m_address;
    bool m_address_isSet;
    bool m_address_isValid;

    QString m_video_url;
    bool m_video_url_isSet;
    bool m_video_url_isValid;

    QString m_voice_url;
    bool m_voice_url_isSet;
    bool m_voice_url_isValid;

    QString m_caption;
    bool m_caption_isSet;
    bool m_caption_isValid;

    QString m_parse_mode;
    bool m_parse_mode_isSet;
    bool m_parse_mode_isValid;

    QList<OAIMessageEntity> m_caption_entities;
    bool m_caption_entities_isSet;
    bool m_caption_entities_isValid;

    OAIInlineKeyboardMarkup m_reply_markup;
    bool m_reply_markup_isSet;
    bool m_reply_markup_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    bool m_show_caption_above_media;
    bool m_show_caption_above_media_isSet;
    bool m_show_caption_above_media_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    qint32 m_thumbnail_width;
    bool m_thumbnail_width_isSet;
    bool m_thumbnail_width_isValid;

    qint32 m_thumbnail_height;
    bool m_thumbnail_height_isSet;
    bool m_thumbnail_height_isValid;

    QString m_performer;
    bool m_performer_isSet;
    bool m_performer_isValid;

    qint32 m_audio_duration;
    bool m_audio_duration_isSet;
    bool m_audio_duration_isValid;

    QString m_last_name;
    bool m_last_name_isSet;
    bool m_last_name_isValid;

    QString m_vcard;
    bool m_vcard_isSet;
    bool m_vcard_isValid;

    qint32 m_gif_width;
    bool m_gif_width_isSet;
    bool m_gif_width_isValid;

    qint32 m_gif_height;
    bool m_gif_height_isSet;
    bool m_gif_height_isValid;

    qint32 m_gif_duration;
    bool m_gif_duration_isSet;
    bool m_gif_duration_isValid;

    QString m_thumbnail_mime_type;
    bool m_thumbnail_mime_type_isSet;
    bool m_thumbnail_mime_type_isValid;

    double m_horizontal_accuracy;
    bool m_horizontal_accuracy_isSet;
    bool m_horizontal_accuracy_isValid;

    qint32 m_live_period;
    bool m_live_period_isSet;
    bool m_live_period_isValid;

    qint32 m_heading;
    bool m_heading_isSet;
    bool m_heading_isValid;

    qint32 m_proximity_alert_radius;
    bool m_proximity_alert_radius_isSet;
    bool m_proximity_alert_radius_isValid;

    qint32 m_mpeg4_width;
    bool m_mpeg4_width_isSet;
    bool m_mpeg4_width_isValid;

    qint32 m_mpeg4_height;
    bool m_mpeg4_height_isSet;
    bool m_mpeg4_height_isValid;

    qint32 m_mpeg4_duration;
    bool m_mpeg4_duration_isSet;
    bool m_mpeg4_duration_isValid;

    qint32 m_photo_width;
    bool m_photo_width_isSet;
    bool m_photo_width_isValid;

    qint32 m_photo_height;
    bool m_photo_height_isSet;
    bool m_photo_height_isValid;

    QString m_foursquare_id;
    bool m_foursquare_id_isSet;
    bool m_foursquare_id_isValid;

    QString m_foursquare_type;
    bool m_foursquare_type_isSet;
    bool m_foursquare_type_isValid;

    QString m_google_place_id;
    bool m_google_place_id_isSet;
    bool m_google_place_id_isValid;

    QString m_google_place_type;
    bool m_google_place_type_isSet;
    bool m_google_place_type_isValid;

    qint32 m_video_width;
    bool m_video_width_isSet;
    bool m_video_width_isValid;

    qint32 m_video_height;
    bool m_video_height_isSet;
    bool m_video_height_isValid;

    qint32 m_video_duration;
    bool m_video_duration_isSet;
    bool m_video_duration_isValid;

    qint32 m_voice_duration;
    bool m_voice_duration_isSet;
    bool m_voice_duration_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIInlineQueryResult)

#endif // OAIInlineQueryResult_H
