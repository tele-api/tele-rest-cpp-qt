/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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

#include "OAIInlineQueryResult.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQueryResult::OAIInlineQueryResult(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQueryResult::OAIInlineQueryResult() {
    this->initializeModel();
}

OAIInlineQueryResult::~OAIInlineQueryResult() {}

void OAIInlineQueryResult::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_audio_file_id_isSet = false;
    m_audio_file_id_isValid = false;

    m_input_message_content_isSet = false;
    m_input_message_content_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_document_file_id_isSet = false;
    m_document_file_id_isValid = false;

    m_gif_file_id_isSet = false;
    m_gif_file_id_isValid = false;

    m_mpeg4_file_id_isSet = false;
    m_mpeg4_file_id_isValid = false;

    m_photo_file_id_isSet = false;
    m_photo_file_id_isValid = false;

    m_sticker_file_id_isSet = false;
    m_sticker_file_id_isValid = false;

    m_video_file_id_isSet = false;
    m_video_file_id_isValid = false;

    m_voice_file_id_isSet = false;
    m_voice_file_id_isValid = false;

    m_thumbnail_url_isSet = false;
    m_thumbnail_url_isValid = false;

    m_audio_url_isSet = false;
    m_audio_url_isValid = false;

    m_phone_number_isSet = false;
    m_phone_number_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_game_short_name_isSet = false;
    m_game_short_name_isValid = false;

    m_document_url_isSet = false;
    m_document_url_isValid = false;

    m_mime_type_isSet = false;
    m_mime_type_isValid = false;

    m_gif_url_isSet = false;
    m_gif_url_isValid = false;

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_mpeg4_url_isSet = false;
    m_mpeg4_url_isValid = false;

    m_photo_url_isSet = false;
    m_photo_url_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_video_url_isSet = false;
    m_video_url_isValid = false;

    m_voice_url_isSet = false;
    m_voice_url_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_show_caption_above_media_isSet = false;
    m_show_caption_above_media_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_thumbnail_width_isSet = false;
    m_thumbnail_width_isValid = false;

    m_thumbnail_height_isSet = false;
    m_thumbnail_height_isValid = false;

    m_performer_isSet = false;
    m_performer_isValid = false;

    m_audio_duration_isSet = false;
    m_audio_duration_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_vcard_isSet = false;
    m_vcard_isValid = false;

    m_gif_width_isSet = false;
    m_gif_width_isValid = false;

    m_gif_height_isSet = false;
    m_gif_height_isValid = false;

    m_gif_duration_isSet = false;
    m_gif_duration_isValid = false;

    m_thumbnail_mime_type_isSet = false;
    m_thumbnail_mime_type_isValid = false;

    m_horizontal_accuracy_isSet = false;
    m_horizontal_accuracy_isValid = false;

    m_live_period_isSet = false;
    m_live_period_isValid = false;

    m_heading_isSet = false;
    m_heading_isValid = false;

    m_proximity_alert_radius_isSet = false;
    m_proximity_alert_radius_isValid = false;

    m_mpeg4_width_isSet = false;
    m_mpeg4_width_isValid = false;

    m_mpeg4_height_isSet = false;
    m_mpeg4_height_isValid = false;

    m_mpeg4_duration_isSet = false;
    m_mpeg4_duration_isValid = false;

    m_photo_width_isSet = false;
    m_photo_width_isValid = false;

    m_photo_height_isSet = false;
    m_photo_height_isValid = false;

    m_foursquare_id_isSet = false;
    m_foursquare_id_isValid = false;

    m_foursquare_type_isSet = false;
    m_foursquare_type_isValid = false;

    m_google_place_id_isSet = false;
    m_google_place_id_isValid = false;

    m_google_place_type_isSet = false;
    m_google_place_type_isValid = false;

    m_video_width_isSet = false;
    m_video_width_isValid = false;

    m_video_height_isSet = false;
    m_video_height_isValid = false;

    m_video_duration_isSet = false;
    m_video_duration_isValid = false;

    m_voice_duration_isSet = false;
    m_voice_duration_isValid = false;
}

void OAIInlineQueryResult::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQueryResult::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_audio_file_id_isValid = ::tele_rest::fromJsonValue(m_audio_file_id, json[QString("audio_file_id")]);
    m_audio_file_id_isSet = !json[QString("audio_file_id")].isNull() && m_audio_file_id_isValid;

    m_input_message_content_isValid = ::tele_rest::fromJsonValue(m_input_message_content, json[QString("input_message_content")]);
    m_input_message_content_isSet = !json[QString("input_message_content")].isNull() && m_input_message_content_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_document_file_id_isValid = ::tele_rest::fromJsonValue(m_document_file_id, json[QString("document_file_id")]);
    m_document_file_id_isSet = !json[QString("document_file_id")].isNull() && m_document_file_id_isValid;

    m_gif_file_id_isValid = ::tele_rest::fromJsonValue(m_gif_file_id, json[QString("gif_file_id")]);
    m_gif_file_id_isSet = !json[QString("gif_file_id")].isNull() && m_gif_file_id_isValid;

    m_mpeg4_file_id_isValid = ::tele_rest::fromJsonValue(m_mpeg4_file_id, json[QString("mpeg4_file_id")]);
    m_mpeg4_file_id_isSet = !json[QString("mpeg4_file_id")].isNull() && m_mpeg4_file_id_isValid;

    m_photo_file_id_isValid = ::tele_rest::fromJsonValue(m_photo_file_id, json[QString("photo_file_id")]);
    m_photo_file_id_isSet = !json[QString("photo_file_id")].isNull() && m_photo_file_id_isValid;

    m_sticker_file_id_isValid = ::tele_rest::fromJsonValue(m_sticker_file_id, json[QString("sticker_file_id")]);
    m_sticker_file_id_isSet = !json[QString("sticker_file_id")].isNull() && m_sticker_file_id_isValid;

    m_video_file_id_isValid = ::tele_rest::fromJsonValue(m_video_file_id, json[QString("video_file_id")]);
    m_video_file_id_isSet = !json[QString("video_file_id")].isNull() && m_video_file_id_isValid;

    m_voice_file_id_isValid = ::tele_rest::fromJsonValue(m_voice_file_id, json[QString("voice_file_id")]);
    m_voice_file_id_isSet = !json[QString("voice_file_id")].isNull() && m_voice_file_id_isValid;

    m_thumbnail_url_isValid = ::tele_rest::fromJsonValue(m_thumbnail_url, json[QString("thumbnail_url")]);
    m_thumbnail_url_isSet = !json[QString("thumbnail_url")].isNull() && m_thumbnail_url_isValid;

    m_audio_url_isValid = ::tele_rest::fromJsonValue(m_audio_url, json[QString("audio_url")]);
    m_audio_url_isSet = !json[QString("audio_url")].isNull() && m_audio_url_isValid;

    m_phone_number_isValid = ::tele_rest::fromJsonValue(m_phone_number, json[QString("phone_number")]);
    m_phone_number_isSet = !json[QString("phone_number")].isNull() && m_phone_number_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_game_short_name_isValid = ::tele_rest::fromJsonValue(m_game_short_name, json[QString("game_short_name")]);
    m_game_short_name_isSet = !json[QString("game_short_name")].isNull() && m_game_short_name_isValid;

    m_document_url_isValid = ::tele_rest::fromJsonValue(m_document_url, json[QString("document_url")]);
    m_document_url_isSet = !json[QString("document_url")].isNull() && m_document_url_isValid;

    m_mime_type_isValid = ::tele_rest::fromJsonValue(m_mime_type, json[QString("mime_type")]);
    m_mime_type_isSet = !json[QString("mime_type")].isNull() && m_mime_type_isValid;

    m_gif_url_isValid = ::tele_rest::fromJsonValue(m_gif_url, json[QString("gif_url")]);
    m_gif_url_isSet = !json[QString("gif_url")].isNull() && m_gif_url_isValid;

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_mpeg4_url_isValid = ::tele_rest::fromJsonValue(m_mpeg4_url, json[QString("mpeg4_url")]);
    m_mpeg4_url_isSet = !json[QString("mpeg4_url")].isNull() && m_mpeg4_url_isValid;

    m_photo_url_isValid = ::tele_rest::fromJsonValue(m_photo_url, json[QString("photo_url")]);
    m_photo_url_isSet = !json[QString("photo_url")].isNull() && m_photo_url_isValid;

    m_address_isValid = ::tele_rest::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_video_url_isValid = ::tele_rest::fromJsonValue(m_video_url, json[QString("video_url")]);
    m_video_url_isSet = !json[QString("video_url")].isNull() && m_video_url_isValid;

    m_voice_url_isValid = ::tele_rest::fromJsonValue(m_voice_url, json[QString("voice_url")]);
    m_voice_url_isSet = !json[QString("voice_url")].isNull() && m_voice_url_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_show_caption_above_media_isValid = ::tele_rest::fromJsonValue(m_show_caption_above_media, json[QString("show_caption_above_media")]);
    m_show_caption_above_media_isSet = !json[QString("show_caption_above_media")].isNull() && m_show_caption_above_media_isValid;

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_thumbnail_width_isValid = ::tele_rest::fromJsonValue(m_thumbnail_width, json[QString("thumbnail_width")]);
    m_thumbnail_width_isSet = !json[QString("thumbnail_width")].isNull() && m_thumbnail_width_isValid;

    m_thumbnail_height_isValid = ::tele_rest::fromJsonValue(m_thumbnail_height, json[QString("thumbnail_height")]);
    m_thumbnail_height_isSet = !json[QString("thumbnail_height")].isNull() && m_thumbnail_height_isValid;

    m_performer_isValid = ::tele_rest::fromJsonValue(m_performer, json[QString("performer")]);
    m_performer_isSet = !json[QString("performer")].isNull() && m_performer_isValid;

    m_audio_duration_isValid = ::tele_rest::fromJsonValue(m_audio_duration, json[QString("audio_duration")]);
    m_audio_duration_isSet = !json[QString("audio_duration")].isNull() && m_audio_duration_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_vcard_isValid = ::tele_rest::fromJsonValue(m_vcard, json[QString("vcard")]);
    m_vcard_isSet = !json[QString("vcard")].isNull() && m_vcard_isValid;

    m_gif_width_isValid = ::tele_rest::fromJsonValue(m_gif_width, json[QString("gif_width")]);
    m_gif_width_isSet = !json[QString("gif_width")].isNull() && m_gif_width_isValid;

    m_gif_height_isValid = ::tele_rest::fromJsonValue(m_gif_height, json[QString("gif_height")]);
    m_gif_height_isSet = !json[QString("gif_height")].isNull() && m_gif_height_isValid;

    m_gif_duration_isValid = ::tele_rest::fromJsonValue(m_gif_duration, json[QString("gif_duration")]);
    m_gif_duration_isSet = !json[QString("gif_duration")].isNull() && m_gif_duration_isValid;

    m_thumbnail_mime_type_isValid = ::tele_rest::fromJsonValue(m_thumbnail_mime_type, json[QString("thumbnail_mime_type")]);
    m_thumbnail_mime_type_isSet = !json[QString("thumbnail_mime_type")].isNull() && m_thumbnail_mime_type_isValid;

    m_horizontal_accuracy_isValid = ::tele_rest::fromJsonValue(m_horizontal_accuracy, json[QString("horizontal_accuracy")]);
    m_horizontal_accuracy_isSet = !json[QString("horizontal_accuracy")].isNull() && m_horizontal_accuracy_isValid;

    m_live_period_isValid = ::tele_rest::fromJsonValue(m_live_period, json[QString("live_period")]);
    m_live_period_isSet = !json[QString("live_period")].isNull() && m_live_period_isValid;

    m_heading_isValid = ::tele_rest::fromJsonValue(m_heading, json[QString("heading")]);
    m_heading_isSet = !json[QString("heading")].isNull() && m_heading_isValid;

    m_proximity_alert_radius_isValid = ::tele_rest::fromJsonValue(m_proximity_alert_radius, json[QString("proximity_alert_radius")]);
    m_proximity_alert_radius_isSet = !json[QString("proximity_alert_radius")].isNull() && m_proximity_alert_radius_isValid;

    m_mpeg4_width_isValid = ::tele_rest::fromJsonValue(m_mpeg4_width, json[QString("mpeg4_width")]);
    m_mpeg4_width_isSet = !json[QString("mpeg4_width")].isNull() && m_mpeg4_width_isValid;

    m_mpeg4_height_isValid = ::tele_rest::fromJsonValue(m_mpeg4_height, json[QString("mpeg4_height")]);
    m_mpeg4_height_isSet = !json[QString("mpeg4_height")].isNull() && m_mpeg4_height_isValid;

    m_mpeg4_duration_isValid = ::tele_rest::fromJsonValue(m_mpeg4_duration, json[QString("mpeg4_duration")]);
    m_mpeg4_duration_isSet = !json[QString("mpeg4_duration")].isNull() && m_mpeg4_duration_isValid;

    m_photo_width_isValid = ::tele_rest::fromJsonValue(m_photo_width, json[QString("photo_width")]);
    m_photo_width_isSet = !json[QString("photo_width")].isNull() && m_photo_width_isValid;

    m_photo_height_isValid = ::tele_rest::fromJsonValue(m_photo_height, json[QString("photo_height")]);
    m_photo_height_isSet = !json[QString("photo_height")].isNull() && m_photo_height_isValid;

    m_foursquare_id_isValid = ::tele_rest::fromJsonValue(m_foursquare_id, json[QString("foursquare_id")]);
    m_foursquare_id_isSet = !json[QString("foursquare_id")].isNull() && m_foursquare_id_isValid;

    m_foursquare_type_isValid = ::tele_rest::fromJsonValue(m_foursquare_type, json[QString("foursquare_type")]);
    m_foursquare_type_isSet = !json[QString("foursquare_type")].isNull() && m_foursquare_type_isValid;

    m_google_place_id_isValid = ::tele_rest::fromJsonValue(m_google_place_id, json[QString("google_place_id")]);
    m_google_place_id_isSet = !json[QString("google_place_id")].isNull() && m_google_place_id_isValid;

    m_google_place_type_isValid = ::tele_rest::fromJsonValue(m_google_place_type, json[QString("google_place_type")]);
    m_google_place_type_isSet = !json[QString("google_place_type")].isNull() && m_google_place_type_isValid;

    m_video_width_isValid = ::tele_rest::fromJsonValue(m_video_width, json[QString("video_width")]);
    m_video_width_isSet = !json[QString("video_width")].isNull() && m_video_width_isValid;

    m_video_height_isValid = ::tele_rest::fromJsonValue(m_video_height, json[QString("video_height")]);
    m_video_height_isSet = !json[QString("video_height")].isNull() && m_video_height_isValid;

    m_video_duration_isValid = ::tele_rest::fromJsonValue(m_video_duration, json[QString("video_duration")]);
    m_video_duration_isSet = !json[QString("video_duration")].isNull() && m_video_duration_isValid;

    m_voice_duration_isValid = ::tele_rest::fromJsonValue(m_voice_duration, json[QString("voice_duration")]);
    m_voice_duration_isSet = !json[QString("voice_duration")].isNull() && m_voice_duration_isValid;
}

QString OAIInlineQueryResult::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQueryResult::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_audio_file_id_isSet) {
        obj.insert(QString("audio_file_id"), ::tele_rest::toJsonValue(m_audio_file_id));
    }
    if (m_input_message_content.isSet()) {
        obj.insert(QString("input_message_content"), ::tele_rest::toJsonValue(m_input_message_content));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_document_file_id_isSet) {
        obj.insert(QString("document_file_id"), ::tele_rest::toJsonValue(m_document_file_id));
    }
    if (m_gif_file_id_isSet) {
        obj.insert(QString("gif_file_id"), ::tele_rest::toJsonValue(m_gif_file_id));
    }
    if (m_mpeg4_file_id_isSet) {
        obj.insert(QString("mpeg4_file_id"), ::tele_rest::toJsonValue(m_mpeg4_file_id));
    }
    if (m_photo_file_id_isSet) {
        obj.insert(QString("photo_file_id"), ::tele_rest::toJsonValue(m_photo_file_id));
    }
    if (m_sticker_file_id_isSet) {
        obj.insert(QString("sticker_file_id"), ::tele_rest::toJsonValue(m_sticker_file_id));
    }
    if (m_video_file_id_isSet) {
        obj.insert(QString("video_file_id"), ::tele_rest::toJsonValue(m_video_file_id));
    }
    if (m_voice_file_id_isSet) {
        obj.insert(QString("voice_file_id"), ::tele_rest::toJsonValue(m_voice_file_id));
    }
    if (m_thumbnail_url_isSet) {
        obj.insert(QString("thumbnail_url"), ::tele_rest::toJsonValue(m_thumbnail_url));
    }
    if (m_audio_url_isSet) {
        obj.insert(QString("audio_url"), ::tele_rest::toJsonValue(m_audio_url));
    }
    if (m_phone_number_isSet) {
        obj.insert(QString("phone_number"), ::tele_rest::toJsonValue(m_phone_number));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_game_short_name_isSet) {
        obj.insert(QString("game_short_name"), ::tele_rest::toJsonValue(m_game_short_name));
    }
    if (m_document_url_isSet) {
        obj.insert(QString("document_url"), ::tele_rest::toJsonValue(m_document_url));
    }
    if (m_mime_type_isSet) {
        obj.insert(QString("mime_type"), ::tele_rest::toJsonValue(m_mime_type));
    }
    if (m_gif_url_isSet) {
        obj.insert(QString("gif_url"), ::tele_rest::toJsonValue(m_gif_url));
    }
    if (m_latitude_isSet) {
        obj.insert(QString("latitude"), ::tele_rest::toJsonValue(m_latitude));
    }
    if (m_longitude_isSet) {
        obj.insert(QString("longitude"), ::tele_rest::toJsonValue(m_longitude));
    }
    if (m_mpeg4_url_isSet) {
        obj.insert(QString("mpeg4_url"), ::tele_rest::toJsonValue(m_mpeg4_url));
    }
    if (m_photo_url_isSet) {
        obj.insert(QString("photo_url"), ::tele_rest::toJsonValue(m_photo_url));
    }
    if (m_address_isSet) {
        obj.insert(QString("address"), ::tele_rest::toJsonValue(m_address));
    }
    if (m_video_url_isSet) {
        obj.insert(QString("video_url"), ::tele_rest::toJsonValue(m_video_url));
    }
    if (m_voice_url_isSet) {
        obj.insert(QString("voice_url"), ::tele_rest::toJsonValue(m_voice_url));
    }
    if (m_caption_isSet) {
        obj.insert(QString("caption"), ::tele_rest::toJsonValue(m_caption));
    }
    if (m_parse_mode_isSet) {
        obj.insert(QString("parse_mode"), ::tele_rest::toJsonValue(m_parse_mode));
    }
    if (m_caption_entities.size() > 0) {
        obj.insert(QString("caption_entities"), ::tele_rest::toJsonValue(m_caption_entities));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_show_caption_above_media_isSet) {
        obj.insert(QString("show_caption_above_media"), ::tele_rest::toJsonValue(m_show_caption_above_media));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_thumbnail_width_isSet) {
        obj.insert(QString("thumbnail_width"), ::tele_rest::toJsonValue(m_thumbnail_width));
    }
    if (m_thumbnail_height_isSet) {
        obj.insert(QString("thumbnail_height"), ::tele_rest::toJsonValue(m_thumbnail_height));
    }
    if (m_performer_isSet) {
        obj.insert(QString("performer"), ::tele_rest::toJsonValue(m_performer));
    }
    if (m_audio_duration_isSet) {
        obj.insert(QString("audio_duration"), ::tele_rest::toJsonValue(m_audio_duration));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_vcard_isSet) {
        obj.insert(QString("vcard"), ::tele_rest::toJsonValue(m_vcard));
    }
    if (m_gif_width_isSet) {
        obj.insert(QString("gif_width"), ::tele_rest::toJsonValue(m_gif_width));
    }
    if (m_gif_height_isSet) {
        obj.insert(QString("gif_height"), ::tele_rest::toJsonValue(m_gif_height));
    }
    if (m_gif_duration_isSet) {
        obj.insert(QString("gif_duration"), ::tele_rest::toJsonValue(m_gif_duration));
    }
    if (m_thumbnail_mime_type_isSet) {
        obj.insert(QString("thumbnail_mime_type"), ::tele_rest::toJsonValue(m_thumbnail_mime_type));
    }
    if (m_horizontal_accuracy_isSet) {
        obj.insert(QString("horizontal_accuracy"), ::tele_rest::toJsonValue(m_horizontal_accuracy));
    }
    if (m_live_period_isSet) {
        obj.insert(QString("live_period"), ::tele_rest::toJsonValue(m_live_period));
    }
    if (m_heading_isSet) {
        obj.insert(QString("heading"), ::tele_rest::toJsonValue(m_heading));
    }
    if (m_proximity_alert_radius_isSet) {
        obj.insert(QString("proximity_alert_radius"), ::tele_rest::toJsonValue(m_proximity_alert_radius));
    }
    if (m_mpeg4_width_isSet) {
        obj.insert(QString("mpeg4_width"), ::tele_rest::toJsonValue(m_mpeg4_width));
    }
    if (m_mpeg4_height_isSet) {
        obj.insert(QString("mpeg4_height"), ::tele_rest::toJsonValue(m_mpeg4_height));
    }
    if (m_mpeg4_duration_isSet) {
        obj.insert(QString("mpeg4_duration"), ::tele_rest::toJsonValue(m_mpeg4_duration));
    }
    if (m_photo_width_isSet) {
        obj.insert(QString("photo_width"), ::tele_rest::toJsonValue(m_photo_width));
    }
    if (m_photo_height_isSet) {
        obj.insert(QString("photo_height"), ::tele_rest::toJsonValue(m_photo_height));
    }
    if (m_foursquare_id_isSet) {
        obj.insert(QString("foursquare_id"), ::tele_rest::toJsonValue(m_foursquare_id));
    }
    if (m_foursquare_type_isSet) {
        obj.insert(QString("foursquare_type"), ::tele_rest::toJsonValue(m_foursquare_type));
    }
    if (m_google_place_id_isSet) {
        obj.insert(QString("google_place_id"), ::tele_rest::toJsonValue(m_google_place_id));
    }
    if (m_google_place_type_isSet) {
        obj.insert(QString("google_place_type"), ::tele_rest::toJsonValue(m_google_place_type));
    }
    if (m_video_width_isSet) {
        obj.insert(QString("video_width"), ::tele_rest::toJsonValue(m_video_width));
    }
    if (m_video_height_isSet) {
        obj.insert(QString("video_height"), ::tele_rest::toJsonValue(m_video_height));
    }
    if (m_video_duration_isSet) {
        obj.insert(QString("video_duration"), ::tele_rest::toJsonValue(m_video_duration));
    }
    if (m_voice_duration_isSet) {
        obj.insert(QString("voice_duration"), ::tele_rest::toJsonValue(m_voice_duration));
    }
    return obj;
}

QString OAIInlineQueryResult::getType() const {
    return m_type;
}
void OAIInlineQueryResult::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInlineQueryResult::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInlineQueryResult::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInlineQueryResult::getId() const {
    return m_id;
}
void OAIInlineQueryResult::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQueryResult::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQueryResult::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInlineQueryResult::getAudioFileId() const {
    return m_audio_file_id;
}
void OAIInlineQueryResult::setAudioFileId(const QString &audio_file_id) {
    m_audio_file_id = audio_file_id;
    m_audio_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_audio_file_id_Set() const{
    return m_audio_file_id_isSet;
}

bool OAIInlineQueryResult::is_audio_file_id_Valid() const{
    return m_audio_file_id_isValid;
}

OAIInputMessageContent OAIInlineQueryResult::getInputMessageContent() const {
    return m_input_message_content;
}
void OAIInlineQueryResult::setInputMessageContent(const OAIInputMessageContent &input_message_content) {
    m_input_message_content = input_message_content;
    m_input_message_content_isSet = true;
}

bool OAIInlineQueryResult::is_input_message_content_Set() const{
    return m_input_message_content_isSet;
}

bool OAIInlineQueryResult::is_input_message_content_Valid() const{
    return m_input_message_content_isValid;
}

QString OAIInlineQueryResult::getTitle() const {
    return m_title;
}
void OAIInlineQueryResult::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInlineQueryResult::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInlineQueryResult::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIInlineQueryResult::getDocumentFileId() const {
    return m_document_file_id;
}
void OAIInlineQueryResult::setDocumentFileId(const QString &document_file_id) {
    m_document_file_id = document_file_id;
    m_document_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_document_file_id_Set() const{
    return m_document_file_id_isSet;
}

bool OAIInlineQueryResult::is_document_file_id_Valid() const{
    return m_document_file_id_isValid;
}

QString OAIInlineQueryResult::getGifFileId() const {
    return m_gif_file_id;
}
void OAIInlineQueryResult::setGifFileId(const QString &gif_file_id) {
    m_gif_file_id = gif_file_id;
    m_gif_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_gif_file_id_Set() const{
    return m_gif_file_id_isSet;
}

bool OAIInlineQueryResult::is_gif_file_id_Valid() const{
    return m_gif_file_id_isValid;
}

QString OAIInlineQueryResult::getMpeg4FileId() const {
    return m_mpeg4_file_id;
}
void OAIInlineQueryResult::setMpeg4FileId(const QString &mpeg4_file_id) {
    m_mpeg4_file_id = mpeg4_file_id;
    m_mpeg4_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_mpeg4_file_id_Set() const{
    return m_mpeg4_file_id_isSet;
}

bool OAIInlineQueryResult::is_mpeg4_file_id_Valid() const{
    return m_mpeg4_file_id_isValid;
}

QString OAIInlineQueryResult::getPhotoFileId() const {
    return m_photo_file_id;
}
void OAIInlineQueryResult::setPhotoFileId(const QString &photo_file_id) {
    m_photo_file_id = photo_file_id;
    m_photo_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_photo_file_id_Set() const{
    return m_photo_file_id_isSet;
}

bool OAIInlineQueryResult::is_photo_file_id_Valid() const{
    return m_photo_file_id_isValid;
}

QString OAIInlineQueryResult::getStickerFileId() const {
    return m_sticker_file_id;
}
void OAIInlineQueryResult::setStickerFileId(const QString &sticker_file_id) {
    m_sticker_file_id = sticker_file_id;
    m_sticker_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_sticker_file_id_Set() const{
    return m_sticker_file_id_isSet;
}

bool OAIInlineQueryResult::is_sticker_file_id_Valid() const{
    return m_sticker_file_id_isValid;
}

QString OAIInlineQueryResult::getVideoFileId() const {
    return m_video_file_id;
}
void OAIInlineQueryResult::setVideoFileId(const QString &video_file_id) {
    m_video_file_id = video_file_id;
    m_video_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_video_file_id_Set() const{
    return m_video_file_id_isSet;
}

bool OAIInlineQueryResult::is_video_file_id_Valid() const{
    return m_video_file_id_isValid;
}

QString OAIInlineQueryResult::getVoiceFileId() const {
    return m_voice_file_id;
}
void OAIInlineQueryResult::setVoiceFileId(const QString &voice_file_id) {
    m_voice_file_id = voice_file_id;
    m_voice_file_id_isSet = true;
}

bool OAIInlineQueryResult::is_voice_file_id_Set() const{
    return m_voice_file_id_isSet;
}

bool OAIInlineQueryResult::is_voice_file_id_Valid() const{
    return m_voice_file_id_isValid;
}

QString OAIInlineQueryResult::getThumbnailUrl() const {
    return m_thumbnail_url;
}
void OAIInlineQueryResult::setThumbnailUrl(const QString &thumbnail_url) {
    m_thumbnail_url = thumbnail_url;
    m_thumbnail_url_isSet = true;
}

bool OAIInlineQueryResult::is_thumbnail_url_Set() const{
    return m_thumbnail_url_isSet;
}

bool OAIInlineQueryResult::is_thumbnail_url_Valid() const{
    return m_thumbnail_url_isValid;
}

QString OAIInlineQueryResult::getAudioUrl() const {
    return m_audio_url;
}
void OAIInlineQueryResult::setAudioUrl(const QString &audio_url) {
    m_audio_url = audio_url;
    m_audio_url_isSet = true;
}

bool OAIInlineQueryResult::is_audio_url_Set() const{
    return m_audio_url_isSet;
}

bool OAIInlineQueryResult::is_audio_url_Valid() const{
    return m_audio_url_isValid;
}

QString OAIInlineQueryResult::getPhoneNumber() const {
    return m_phone_number;
}
void OAIInlineQueryResult::setPhoneNumber(const QString &phone_number) {
    m_phone_number = phone_number;
    m_phone_number_isSet = true;
}

bool OAIInlineQueryResult::is_phone_number_Set() const{
    return m_phone_number_isSet;
}

bool OAIInlineQueryResult::is_phone_number_Valid() const{
    return m_phone_number_isValid;
}

QString OAIInlineQueryResult::getFirstName() const {
    return m_first_name;
}
void OAIInlineQueryResult::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAIInlineQueryResult::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAIInlineQueryResult::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAIInlineQueryResult::getGameShortName() const {
    return m_game_short_name;
}
void OAIInlineQueryResult::setGameShortName(const QString &game_short_name) {
    m_game_short_name = game_short_name;
    m_game_short_name_isSet = true;
}

bool OAIInlineQueryResult::is_game_short_name_Set() const{
    return m_game_short_name_isSet;
}

bool OAIInlineQueryResult::is_game_short_name_Valid() const{
    return m_game_short_name_isValid;
}

QString OAIInlineQueryResult::getDocumentUrl() const {
    return m_document_url;
}
void OAIInlineQueryResult::setDocumentUrl(const QString &document_url) {
    m_document_url = document_url;
    m_document_url_isSet = true;
}

bool OAIInlineQueryResult::is_document_url_Set() const{
    return m_document_url_isSet;
}

bool OAIInlineQueryResult::is_document_url_Valid() const{
    return m_document_url_isValid;
}

QString OAIInlineQueryResult::getMimeType() const {
    return m_mime_type;
}
void OAIInlineQueryResult::setMimeType(const QString &mime_type) {
    m_mime_type = mime_type;
    m_mime_type_isSet = true;
}

bool OAIInlineQueryResult::is_mime_type_Set() const{
    return m_mime_type_isSet;
}

bool OAIInlineQueryResult::is_mime_type_Valid() const{
    return m_mime_type_isValid;
}

QString OAIInlineQueryResult::getGifUrl() const {
    return m_gif_url;
}
void OAIInlineQueryResult::setGifUrl(const QString &gif_url) {
    m_gif_url = gif_url;
    m_gif_url_isSet = true;
}

bool OAIInlineQueryResult::is_gif_url_Set() const{
    return m_gif_url_isSet;
}

bool OAIInlineQueryResult::is_gif_url_Valid() const{
    return m_gif_url_isValid;
}

double OAIInlineQueryResult::getLatitude() const {
    return m_latitude;
}
void OAIInlineQueryResult::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAIInlineQueryResult::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAIInlineQueryResult::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAIInlineQueryResult::getLongitude() const {
    return m_longitude;
}
void OAIInlineQueryResult::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAIInlineQueryResult::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAIInlineQueryResult::is_longitude_Valid() const{
    return m_longitude_isValid;
}

QString OAIInlineQueryResult::getMpeg4Url() const {
    return m_mpeg4_url;
}
void OAIInlineQueryResult::setMpeg4Url(const QString &mpeg4_url) {
    m_mpeg4_url = mpeg4_url;
    m_mpeg4_url_isSet = true;
}

bool OAIInlineQueryResult::is_mpeg4_url_Set() const{
    return m_mpeg4_url_isSet;
}

bool OAIInlineQueryResult::is_mpeg4_url_Valid() const{
    return m_mpeg4_url_isValid;
}

QString OAIInlineQueryResult::getPhotoUrl() const {
    return m_photo_url;
}
void OAIInlineQueryResult::setPhotoUrl(const QString &photo_url) {
    m_photo_url = photo_url;
    m_photo_url_isSet = true;
}

bool OAIInlineQueryResult::is_photo_url_Set() const{
    return m_photo_url_isSet;
}

bool OAIInlineQueryResult::is_photo_url_Valid() const{
    return m_photo_url_isValid;
}

QString OAIInlineQueryResult::getAddress() const {
    return m_address;
}
void OAIInlineQueryResult::setAddress(const QString &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAIInlineQueryResult::is_address_Set() const{
    return m_address_isSet;
}

bool OAIInlineQueryResult::is_address_Valid() const{
    return m_address_isValid;
}

QString OAIInlineQueryResult::getVideoUrl() const {
    return m_video_url;
}
void OAIInlineQueryResult::setVideoUrl(const QString &video_url) {
    m_video_url = video_url;
    m_video_url_isSet = true;
}

bool OAIInlineQueryResult::is_video_url_Set() const{
    return m_video_url_isSet;
}

bool OAIInlineQueryResult::is_video_url_Valid() const{
    return m_video_url_isValid;
}

QString OAIInlineQueryResult::getVoiceUrl() const {
    return m_voice_url;
}
void OAIInlineQueryResult::setVoiceUrl(const QString &voice_url) {
    m_voice_url = voice_url;
    m_voice_url_isSet = true;
}

bool OAIInlineQueryResult::is_voice_url_Set() const{
    return m_voice_url_isSet;
}

bool OAIInlineQueryResult::is_voice_url_Valid() const{
    return m_voice_url_isValid;
}

QString OAIInlineQueryResult::getCaption() const {
    return m_caption;
}
void OAIInlineQueryResult::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAIInlineQueryResult::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAIInlineQueryResult::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAIInlineQueryResult::getParseMode() const {
    return m_parse_mode;
}
void OAIInlineQueryResult::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIInlineQueryResult::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIInlineQueryResult::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIInlineQueryResult::getCaptionEntities() const {
    return m_caption_entities;
}
void OAIInlineQueryResult::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAIInlineQueryResult::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAIInlineQueryResult::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

OAIInlineKeyboardMarkup OAIInlineQueryResult::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIInlineQueryResult::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIInlineQueryResult::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIInlineQueryResult::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

QString OAIInlineQueryResult::getDescription() const {
    return m_description;
}
void OAIInlineQueryResult::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIInlineQueryResult::is_description_Set() const{
    return m_description_isSet;
}

bool OAIInlineQueryResult::is_description_Valid() const{
    return m_description_isValid;
}

bool OAIInlineQueryResult::isShowCaptionAboveMedia() const {
    return m_show_caption_above_media;
}
void OAIInlineQueryResult::setShowCaptionAboveMedia(const bool &show_caption_above_media) {
    m_show_caption_above_media = show_caption_above_media;
    m_show_caption_above_media_isSet = true;
}

bool OAIInlineQueryResult::is_show_caption_above_media_Set() const{
    return m_show_caption_above_media_isSet;
}

bool OAIInlineQueryResult::is_show_caption_above_media_Valid() const{
    return m_show_caption_above_media_isValid;
}

QString OAIInlineQueryResult::getUrl() const {
    return m_url;
}
void OAIInlineQueryResult::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIInlineQueryResult::is_url_Set() const{
    return m_url_isSet;
}

bool OAIInlineQueryResult::is_url_Valid() const{
    return m_url_isValid;
}

qint32 OAIInlineQueryResult::getThumbnailWidth() const {
    return m_thumbnail_width;
}
void OAIInlineQueryResult::setThumbnailWidth(const qint32 &thumbnail_width) {
    m_thumbnail_width = thumbnail_width;
    m_thumbnail_width_isSet = true;
}

bool OAIInlineQueryResult::is_thumbnail_width_Set() const{
    return m_thumbnail_width_isSet;
}

bool OAIInlineQueryResult::is_thumbnail_width_Valid() const{
    return m_thumbnail_width_isValid;
}

qint32 OAIInlineQueryResult::getThumbnailHeight() const {
    return m_thumbnail_height;
}
void OAIInlineQueryResult::setThumbnailHeight(const qint32 &thumbnail_height) {
    m_thumbnail_height = thumbnail_height;
    m_thumbnail_height_isSet = true;
}

bool OAIInlineQueryResult::is_thumbnail_height_Set() const{
    return m_thumbnail_height_isSet;
}

bool OAIInlineQueryResult::is_thumbnail_height_Valid() const{
    return m_thumbnail_height_isValid;
}

QString OAIInlineQueryResult::getPerformer() const {
    return m_performer;
}
void OAIInlineQueryResult::setPerformer(const QString &performer) {
    m_performer = performer;
    m_performer_isSet = true;
}

bool OAIInlineQueryResult::is_performer_Set() const{
    return m_performer_isSet;
}

bool OAIInlineQueryResult::is_performer_Valid() const{
    return m_performer_isValid;
}

qint32 OAIInlineQueryResult::getAudioDuration() const {
    return m_audio_duration;
}
void OAIInlineQueryResult::setAudioDuration(const qint32 &audio_duration) {
    m_audio_duration = audio_duration;
    m_audio_duration_isSet = true;
}

bool OAIInlineQueryResult::is_audio_duration_Set() const{
    return m_audio_duration_isSet;
}

bool OAIInlineQueryResult::is_audio_duration_Valid() const{
    return m_audio_duration_isValid;
}

QString OAIInlineQueryResult::getLastName() const {
    return m_last_name;
}
void OAIInlineQueryResult::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAIInlineQueryResult::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAIInlineQueryResult::is_last_name_Valid() const{
    return m_last_name_isValid;
}

QString OAIInlineQueryResult::getVcard() const {
    return m_vcard;
}
void OAIInlineQueryResult::setVcard(const QString &vcard) {
    m_vcard = vcard;
    m_vcard_isSet = true;
}

bool OAIInlineQueryResult::is_vcard_Set() const{
    return m_vcard_isSet;
}

bool OAIInlineQueryResult::is_vcard_Valid() const{
    return m_vcard_isValid;
}

qint32 OAIInlineQueryResult::getGifWidth() const {
    return m_gif_width;
}
void OAIInlineQueryResult::setGifWidth(const qint32 &gif_width) {
    m_gif_width = gif_width;
    m_gif_width_isSet = true;
}

bool OAIInlineQueryResult::is_gif_width_Set() const{
    return m_gif_width_isSet;
}

bool OAIInlineQueryResult::is_gif_width_Valid() const{
    return m_gif_width_isValid;
}

qint32 OAIInlineQueryResult::getGifHeight() const {
    return m_gif_height;
}
void OAIInlineQueryResult::setGifHeight(const qint32 &gif_height) {
    m_gif_height = gif_height;
    m_gif_height_isSet = true;
}

bool OAIInlineQueryResult::is_gif_height_Set() const{
    return m_gif_height_isSet;
}

bool OAIInlineQueryResult::is_gif_height_Valid() const{
    return m_gif_height_isValid;
}

qint32 OAIInlineQueryResult::getGifDuration() const {
    return m_gif_duration;
}
void OAIInlineQueryResult::setGifDuration(const qint32 &gif_duration) {
    m_gif_duration = gif_duration;
    m_gif_duration_isSet = true;
}

bool OAIInlineQueryResult::is_gif_duration_Set() const{
    return m_gif_duration_isSet;
}

bool OAIInlineQueryResult::is_gif_duration_Valid() const{
    return m_gif_duration_isValid;
}

QString OAIInlineQueryResult::getThumbnailMimeType() const {
    return m_thumbnail_mime_type;
}
void OAIInlineQueryResult::setThumbnailMimeType(const QString &thumbnail_mime_type) {
    m_thumbnail_mime_type = thumbnail_mime_type;
    m_thumbnail_mime_type_isSet = true;
}

bool OAIInlineQueryResult::is_thumbnail_mime_type_Set() const{
    return m_thumbnail_mime_type_isSet;
}

bool OAIInlineQueryResult::is_thumbnail_mime_type_Valid() const{
    return m_thumbnail_mime_type_isValid;
}

double OAIInlineQueryResult::getHorizontalAccuracy() const {
    return m_horizontal_accuracy;
}
void OAIInlineQueryResult::setHorizontalAccuracy(const double &horizontal_accuracy) {
    m_horizontal_accuracy = horizontal_accuracy;
    m_horizontal_accuracy_isSet = true;
}

bool OAIInlineQueryResult::is_horizontal_accuracy_Set() const{
    return m_horizontal_accuracy_isSet;
}

bool OAIInlineQueryResult::is_horizontal_accuracy_Valid() const{
    return m_horizontal_accuracy_isValid;
}

qint32 OAIInlineQueryResult::getLivePeriod() const {
    return m_live_period;
}
void OAIInlineQueryResult::setLivePeriod(const qint32 &live_period) {
    m_live_period = live_period;
    m_live_period_isSet = true;
}

bool OAIInlineQueryResult::is_live_period_Set() const{
    return m_live_period_isSet;
}

bool OAIInlineQueryResult::is_live_period_Valid() const{
    return m_live_period_isValid;
}

qint32 OAIInlineQueryResult::getHeading() const {
    return m_heading;
}
void OAIInlineQueryResult::setHeading(const qint32 &heading) {
    m_heading = heading;
    m_heading_isSet = true;
}

bool OAIInlineQueryResult::is_heading_Set() const{
    return m_heading_isSet;
}

bool OAIInlineQueryResult::is_heading_Valid() const{
    return m_heading_isValid;
}

qint32 OAIInlineQueryResult::getProximityAlertRadius() const {
    return m_proximity_alert_radius;
}
void OAIInlineQueryResult::setProximityAlertRadius(const qint32 &proximity_alert_radius) {
    m_proximity_alert_radius = proximity_alert_radius;
    m_proximity_alert_radius_isSet = true;
}

bool OAIInlineQueryResult::is_proximity_alert_radius_Set() const{
    return m_proximity_alert_radius_isSet;
}

bool OAIInlineQueryResult::is_proximity_alert_radius_Valid() const{
    return m_proximity_alert_radius_isValid;
}

qint32 OAIInlineQueryResult::getMpeg4Width() const {
    return m_mpeg4_width;
}
void OAIInlineQueryResult::setMpeg4Width(const qint32 &mpeg4_width) {
    m_mpeg4_width = mpeg4_width;
    m_mpeg4_width_isSet = true;
}

bool OAIInlineQueryResult::is_mpeg4_width_Set() const{
    return m_mpeg4_width_isSet;
}

bool OAIInlineQueryResult::is_mpeg4_width_Valid() const{
    return m_mpeg4_width_isValid;
}

qint32 OAIInlineQueryResult::getMpeg4Height() const {
    return m_mpeg4_height;
}
void OAIInlineQueryResult::setMpeg4Height(const qint32 &mpeg4_height) {
    m_mpeg4_height = mpeg4_height;
    m_mpeg4_height_isSet = true;
}

bool OAIInlineQueryResult::is_mpeg4_height_Set() const{
    return m_mpeg4_height_isSet;
}

bool OAIInlineQueryResult::is_mpeg4_height_Valid() const{
    return m_mpeg4_height_isValid;
}

qint32 OAIInlineQueryResult::getMpeg4Duration() const {
    return m_mpeg4_duration;
}
void OAIInlineQueryResult::setMpeg4Duration(const qint32 &mpeg4_duration) {
    m_mpeg4_duration = mpeg4_duration;
    m_mpeg4_duration_isSet = true;
}

bool OAIInlineQueryResult::is_mpeg4_duration_Set() const{
    return m_mpeg4_duration_isSet;
}

bool OAIInlineQueryResult::is_mpeg4_duration_Valid() const{
    return m_mpeg4_duration_isValid;
}

qint32 OAIInlineQueryResult::getPhotoWidth() const {
    return m_photo_width;
}
void OAIInlineQueryResult::setPhotoWidth(const qint32 &photo_width) {
    m_photo_width = photo_width;
    m_photo_width_isSet = true;
}

bool OAIInlineQueryResult::is_photo_width_Set() const{
    return m_photo_width_isSet;
}

bool OAIInlineQueryResult::is_photo_width_Valid() const{
    return m_photo_width_isValid;
}

qint32 OAIInlineQueryResult::getPhotoHeight() const {
    return m_photo_height;
}
void OAIInlineQueryResult::setPhotoHeight(const qint32 &photo_height) {
    m_photo_height = photo_height;
    m_photo_height_isSet = true;
}

bool OAIInlineQueryResult::is_photo_height_Set() const{
    return m_photo_height_isSet;
}

bool OAIInlineQueryResult::is_photo_height_Valid() const{
    return m_photo_height_isValid;
}

QString OAIInlineQueryResult::getFoursquareId() const {
    return m_foursquare_id;
}
void OAIInlineQueryResult::setFoursquareId(const QString &foursquare_id) {
    m_foursquare_id = foursquare_id;
    m_foursquare_id_isSet = true;
}

bool OAIInlineQueryResult::is_foursquare_id_Set() const{
    return m_foursquare_id_isSet;
}

bool OAIInlineQueryResult::is_foursquare_id_Valid() const{
    return m_foursquare_id_isValid;
}

QString OAIInlineQueryResult::getFoursquareType() const {
    return m_foursquare_type;
}
void OAIInlineQueryResult::setFoursquareType(const QString &foursquare_type) {
    m_foursquare_type = foursquare_type;
    m_foursquare_type_isSet = true;
}

bool OAIInlineQueryResult::is_foursquare_type_Set() const{
    return m_foursquare_type_isSet;
}

bool OAIInlineQueryResult::is_foursquare_type_Valid() const{
    return m_foursquare_type_isValid;
}

QString OAIInlineQueryResult::getGooglePlaceId() const {
    return m_google_place_id;
}
void OAIInlineQueryResult::setGooglePlaceId(const QString &google_place_id) {
    m_google_place_id = google_place_id;
    m_google_place_id_isSet = true;
}

bool OAIInlineQueryResult::is_google_place_id_Set() const{
    return m_google_place_id_isSet;
}

bool OAIInlineQueryResult::is_google_place_id_Valid() const{
    return m_google_place_id_isValid;
}

QString OAIInlineQueryResult::getGooglePlaceType() const {
    return m_google_place_type;
}
void OAIInlineQueryResult::setGooglePlaceType(const QString &google_place_type) {
    m_google_place_type = google_place_type;
    m_google_place_type_isSet = true;
}

bool OAIInlineQueryResult::is_google_place_type_Set() const{
    return m_google_place_type_isSet;
}

bool OAIInlineQueryResult::is_google_place_type_Valid() const{
    return m_google_place_type_isValid;
}

qint32 OAIInlineQueryResult::getVideoWidth() const {
    return m_video_width;
}
void OAIInlineQueryResult::setVideoWidth(const qint32 &video_width) {
    m_video_width = video_width;
    m_video_width_isSet = true;
}

bool OAIInlineQueryResult::is_video_width_Set() const{
    return m_video_width_isSet;
}

bool OAIInlineQueryResult::is_video_width_Valid() const{
    return m_video_width_isValid;
}

qint32 OAIInlineQueryResult::getVideoHeight() const {
    return m_video_height;
}
void OAIInlineQueryResult::setVideoHeight(const qint32 &video_height) {
    m_video_height = video_height;
    m_video_height_isSet = true;
}

bool OAIInlineQueryResult::is_video_height_Set() const{
    return m_video_height_isSet;
}

bool OAIInlineQueryResult::is_video_height_Valid() const{
    return m_video_height_isValid;
}

qint32 OAIInlineQueryResult::getVideoDuration() const {
    return m_video_duration;
}
void OAIInlineQueryResult::setVideoDuration(const qint32 &video_duration) {
    m_video_duration = video_duration;
    m_video_duration_isSet = true;
}

bool OAIInlineQueryResult::is_video_duration_Set() const{
    return m_video_duration_isSet;
}

bool OAIInlineQueryResult::is_video_duration_Valid() const{
    return m_video_duration_isValid;
}

qint32 OAIInlineQueryResult::getVoiceDuration() const {
    return m_voice_duration;
}
void OAIInlineQueryResult::setVoiceDuration(const qint32 &voice_duration) {
    m_voice_duration = voice_duration;
    m_voice_duration_isSet = true;
}

bool OAIInlineQueryResult::is_voice_duration_Set() const{
    return m_voice_duration_isSet;
}

bool OAIInlineQueryResult::is_voice_duration_Valid() const{
    return m_voice_duration_isValid;
}

bool OAIInlineQueryResult::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_audio_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_input_message_content.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_document_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mpeg4_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_voice_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_audio_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_game_short_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_document_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mime_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_latitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_longitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mpeg4_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_voice_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_caption_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_caption_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_show_caption_above_media_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_performer_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_audio_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vcard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_mime_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_horizontal_accuracy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_live_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_heading_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_proximity_alert_radius_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mpeg4_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mpeg4_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mpeg4_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_foursquare_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_foursquare_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_google_place_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_google_place_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_voice_duration_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInlineQueryResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_audio_file_id_isValid && m_input_message_content_isValid && m_title_isValid && m_document_file_id_isValid && m_gif_file_id_isValid && m_mpeg4_file_id_isValid && m_photo_file_id_isValid && m_sticker_file_id_isValid && m_video_file_id_isValid && m_voice_file_id_isValid && m_thumbnail_url_isValid && m_audio_url_isValid && m_phone_number_isValid && m_first_name_isValid && m_game_short_name_isValid && m_document_url_isValid && m_mime_type_isValid && m_gif_url_isValid && m_latitude_isValid && m_longitude_isValid && m_mpeg4_url_isValid && m_photo_url_isValid && m_address_isValid && m_video_url_isValid && m_voice_url_isValid && true;
}

} // namespace tele_rest
