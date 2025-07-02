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

#include "OAIChatFullInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatFullInfo::OAIChatFullInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatFullInfo::OAIChatFullInfo() {
    this->initializeModel();
}

OAIChatFullInfo::~OAIChatFullInfo() {}

void OAIChatFullInfo::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_accent_color_id_isSet = false;
    m_accent_color_id_isValid = false;

    m_max_reaction_count_isSet = false;
    m_max_reaction_count_isValid = false;

    m_accepted_gift_types_isSet = false;
    m_accepted_gift_types_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_is_forum_isSet = false;
    m_is_forum_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;

    m_active_usernames_isSet = false;
    m_active_usernames_isValid = false;

    m_birthdate_isSet = false;
    m_birthdate_isValid = false;

    m_business_intro_isSet = false;
    m_business_intro_isValid = false;

    m_business_location_isSet = false;
    m_business_location_isValid = false;

    m_business_opening_hours_isSet = false;
    m_business_opening_hours_isValid = false;

    m_personal_chat_isSet = false;
    m_personal_chat_isValid = false;

    m_available_reactions_isSet = false;
    m_available_reactions_isValid = false;

    m_background_custom_emoji_id_isSet = false;
    m_background_custom_emoji_id_isValid = false;

    m_profile_accent_color_id_isSet = false;
    m_profile_accent_color_id_isValid = false;

    m_profile_background_custom_emoji_id_isSet = false;
    m_profile_background_custom_emoji_id_isValid = false;

    m_emoji_status_custom_emoji_id_isSet = false;
    m_emoji_status_custom_emoji_id_isValid = false;

    m_emoji_status_expiration_date_isSet = false;
    m_emoji_status_expiration_date_isValid = false;

    m_bio_isSet = false;
    m_bio_isValid = false;

    m_has_private_forwards_isSet = false;
    m_has_private_forwards_isValid = false;

    m_has_restricted_voice_and_video_messages_isSet = false;
    m_has_restricted_voice_and_video_messages_isValid = false;

    m_join_to_send_messages_isSet = false;
    m_join_to_send_messages_isValid = false;

    m_join_by_request_isSet = false;
    m_join_by_request_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_invite_link_isSet = false;
    m_invite_link_isValid = false;

    m_pinned_message_isSet = false;
    m_pinned_message_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;

    m_can_send_paid_media_isSet = false;
    m_can_send_paid_media_isValid = false;

    m_slow_mode_delay_isSet = false;
    m_slow_mode_delay_isValid = false;

    m_unrestrict_boost_count_isSet = false;
    m_unrestrict_boost_count_isValid = false;

    m_message_auto_delete_time_isSet = false;
    m_message_auto_delete_time_isValid = false;

    m_has_aggressive_anti_spam_enabled_isSet = false;
    m_has_aggressive_anti_spam_enabled_isValid = false;

    m_has_hidden_members_isSet = false;
    m_has_hidden_members_isValid = false;

    m_has_protected_content_isSet = false;
    m_has_protected_content_isValid = false;

    m_has_visible_history_isSet = false;
    m_has_visible_history_isValid = false;

    m_sticker_set_name_isSet = false;
    m_sticker_set_name_isValid = false;

    m_can_set_sticker_set_isSet = false;
    m_can_set_sticker_set_isValid = false;

    m_custom_emoji_sticker_set_name_isSet = false;
    m_custom_emoji_sticker_set_name_isValid = false;

    m_linked_chat_id_isSet = false;
    m_linked_chat_id_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;
}

void OAIChatFullInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatFullInfo::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_accent_color_id_isValid = ::tele_rest::fromJsonValue(m_accent_color_id, json[QString("accent_color_id")]);
    m_accent_color_id_isSet = !json[QString("accent_color_id")].isNull() && m_accent_color_id_isValid;

    m_max_reaction_count_isValid = ::tele_rest::fromJsonValue(m_max_reaction_count, json[QString("max_reaction_count")]);
    m_max_reaction_count_isSet = !json[QString("max_reaction_count")].isNull() && m_max_reaction_count_isValid;

    m_accepted_gift_types_isValid = ::tele_rest::fromJsonValue(m_accepted_gift_types, json[QString("accepted_gift_types")]);
    m_accepted_gift_types_isSet = !json[QString("accepted_gift_types")].isNull() && m_accepted_gift_types_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_username_isValid = ::tele_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_is_forum_isValid = ::tele_rest::fromJsonValue(m_is_forum, json[QString("is_forum")]);
    m_is_forum_isSet = !json[QString("is_forum")].isNull() && m_is_forum_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;

    m_active_usernames_isValid = ::tele_rest::fromJsonValue(m_active_usernames, json[QString("active_usernames")]);
    m_active_usernames_isSet = !json[QString("active_usernames")].isNull() && m_active_usernames_isValid;

    m_birthdate_isValid = ::tele_rest::fromJsonValue(m_birthdate, json[QString("birthdate")]);
    m_birthdate_isSet = !json[QString("birthdate")].isNull() && m_birthdate_isValid;

    m_business_intro_isValid = ::tele_rest::fromJsonValue(m_business_intro, json[QString("business_intro")]);
    m_business_intro_isSet = !json[QString("business_intro")].isNull() && m_business_intro_isValid;

    m_business_location_isValid = ::tele_rest::fromJsonValue(m_business_location, json[QString("business_location")]);
    m_business_location_isSet = !json[QString("business_location")].isNull() && m_business_location_isValid;

    m_business_opening_hours_isValid = ::tele_rest::fromJsonValue(m_business_opening_hours, json[QString("business_opening_hours")]);
    m_business_opening_hours_isSet = !json[QString("business_opening_hours")].isNull() && m_business_opening_hours_isValid;

    m_personal_chat_isValid = ::tele_rest::fromJsonValue(m_personal_chat, json[QString("personal_chat")]);
    m_personal_chat_isSet = !json[QString("personal_chat")].isNull() && m_personal_chat_isValid;

    m_available_reactions_isValid = ::tele_rest::fromJsonValue(m_available_reactions, json[QString("available_reactions")]);
    m_available_reactions_isSet = !json[QString("available_reactions")].isNull() && m_available_reactions_isValid;

    m_background_custom_emoji_id_isValid = ::tele_rest::fromJsonValue(m_background_custom_emoji_id, json[QString("background_custom_emoji_id")]);
    m_background_custom_emoji_id_isSet = !json[QString("background_custom_emoji_id")].isNull() && m_background_custom_emoji_id_isValid;

    m_profile_accent_color_id_isValid = ::tele_rest::fromJsonValue(m_profile_accent_color_id, json[QString("profile_accent_color_id")]);
    m_profile_accent_color_id_isSet = !json[QString("profile_accent_color_id")].isNull() && m_profile_accent_color_id_isValid;

    m_profile_background_custom_emoji_id_isValid = ::tele_rest::fromJsonValue(m_profile_background_custom_emoji_id, json[QString("profile_background_custom_emoji_id")]);
    m_profile_background_custom_emoji_id_isSet = !json[QString("profile_background_custom_emoji_id")].isNull() && m_profile_background_custom_emoji_id_isValid;

    m_emoji_status_custom_emoji_id_isValid = ::tele_rest::fromJsonValue(m_emoji_status_custom_emoji_id, json[QString("emoji_status_custom_emoji_id")]);
    m_emoji_status_custom_emoji_id_isSet = !json[QString("emoji_status_custom_emoji_id")].isNull() && m_emoji_status_custom_emoji_id_isValid;

    m_emoji_status_expiration_date_isValid = ::tele_rest::fromJsonValue(m_emoji_status_expiration_date, json[QString("emoji_status_expiration_date")]);
    m_emoji_status_expiration_date_isSet = !json[QString("emoji_status_expiration_date")].isNull() && m_emoji_status_expiration_date_isValid;

    m_bio_isValid = ::tele_rest::fromJsonValue(m_bio, json[QString("bio")]);
    m_bio_isSet = !json[QString("bio")].isNull() && m_bio_isValid;

    m_has_private_forwards_isValid = ::tele_rest::fromJsonValue(m_has_private_forwards, json[QString("has_private_forwards")]);
    m_has_private_forwards_isSet = !json[QString("has_private_forwards")].isNull() && m_has_private_forwards_isValid;

    m_has_restricted_voice_and_video_messages_isValid = ::tele_rest::fromJsonValue(m_has_restricted_voice_and_video_messages, json[QString("has_restricted_voice_and_video_messages")]);
    m_has_restricted_voice_and_video_messages_isSet = !json[QString("has_restricted_voice_and_video_messages")].isNull() && m_has_restricted_voice_and_video_messages_isValid;

    m_join_to_send_messages_isValid = ::tele_rest::fromJsonValue(m_join_to_send_messages, json[QString("join_to_send_messages")]);
    m_join_to_send_messages_isSet = !json[QString("join_to_send_messages")].isNull() && m_join_to_send_messages_isValid;

    m_join_by_request_isValid = ::tele_rest::fromJsonValue(m_join_by_request, json[QString("join_by_request")]);
    m_join_by_request_isSet = !json[QString("join_by_request")].isNull() && m_join_by_request_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_invite_link_isValid = ::tele_rest::fromJsonValue(m_invite_link, json[QString("invite_link")]);
    m_invite_link_isSet = !json[QString("invite_link")].isNull() && m_invite_link_isValid;

    m_pinned_message_isValid = ::tele_rest::fromJsonValue(m_pinned_message, json[QString("pinned_message")]);
    m_pinned_message_isSet = !json[QString("pinned_message")].isNull() && m_pinned_message_isValid;

    m_permissions_isValid = ::tele_rest::fromJsonValue(m_permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;

    m_can_send_paid_media_isValid = ::tele_rest::fromJsonValue(m_can_send_paid_media, json[QString("can_send_paid_media")]);
    m_can_send_paid_media_isSet = !json[QString("can_send_paid_media")].isNull() && m_can_send_paid_media_isValid;

    m_slow_mode_delay_isValid = ::tele_rest::fromJsonValue(m_slow_mode_delay, json[QString("slow_mode_delay")]);
    m_slow_mode_delay_isSet = !json[QString("slow_mode_delay")].isNull() && m_slow_mode_delay_isValid;

    m_unrestrict_boost_count_isValid = ::tele_rest::fromJsonValue(m_unrestrict_boost_count, json[QString("unrestrict_boost_count")]);
    m_unrestrict_boost_count_isSet = !json[QString("unrestrict_boost_count")].isNull() && m_unrestrict_boost_count_isValid;

    m_message_auto_delete_time_isValid = ::tele_rest::fromJsonValue(m_message_auto_delete_time, json[QString("message_auto_delete_time")]);
    m_message_auto_delete_time_isSet = !json[QString("message_auto_delete_time")].isNull() && m_message_auto_delete_time_isValid;

    m_has_aggressive_anti_spam_enabled_isValid = ::tele_rest::fromJsonValue(m_has_aggressive_anti_spam_enabled, json[QString("has_aggressive_anti_spam_enabled")]);
    m_has_aggressive_anti_spam_enabled_isSet = !json[QString("has_aggressive_anti_spam_enabled")].isNull() && m_has_aggressive_anti_spam_enabled_isValid;

    m_has_hidden_members_isValid = ::tele_rest::fromJsonValue(m_has_hidden_members, json[QString("has_hidden_members")]);
    m_has_hidden_members_isSet = !json[QString("has_hidden_members")].isNull() && m_has_hidden_members_isValid;

    m_has_protected_content_isValid = ::tele_rest::fromJsonValue(m_has_protected_content, json[QString("has_protected_content")]);
    m_has_protected_content_isSet = !json[QString("has_protected_content")].isNull() && m_has_protected_content_isValid;

    m_has_visible_history_isValid = ::tele_rest::fromJsonValue(m_has_visible_history, json[QString("has_visible_history")]);
    m_has_visible_history_isSet = !json[QString("has_visible_history")].isNull() && m_has_visible_history_isValid;

    m_sticker_set_name_isValid = ::tele_rest::fromJsonValue(m_sticker_set_name, json[QString("sticker_set_name")]);
    m_sticker_set_name_isSet = !json[QString("sticker_set_name")].isNull() && m_sticker_set_name_isValid;

    m_can_set_sticker_set_isValid = ::tele_rest::fromJsonValue(m_can_set_sticker_set, json[QString("can_set_sticker_set")]);
    m_can_set_sticker_set_isSet = !json[QString("can_set_sticker_set")].isNull() && m_can_set_sticker_set_isValid;

    m_custom_emoji_sticker_set_name_isValid = ::tele_rest::fromJsonValue(m_custom_emoji_sticker_set_name, json[QString("custom_emoji_sticker_set_name")]);
    m_custom_emoji_sticker_set_name_isSet = !json[QString("custom_emoji_sticker_set_name")].isNull() && m_custom_emoji_sticker_set_name_isValid;

    m_linked_chat_id_isValid = ::tele_rest::fromJsonValue(m_linked_chat_id, json[QString("linked_chat_id")]);
    m_linked_chat_id_isSet = !json[QString("linked_chat_id")].isNull() && m_linked_chat_id_isValid;

    m_location_isValid = ::tele_rest::fromJsonValue(m_location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;
}

QString OAIChatFullInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatFullInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_accent_color_id_isSet) {
        obj.insert(QString("accent_color_id"), ::tele_rest::toJsonValue(m_accent_color_id));
    }
    if (m_max_reaction_count_isSet) {
        obj.insert(QString("max_reaction_count"), ::tele_rest::toJsonValue(m_max_reaction_count));
    }
    if (m_accepted_gift_types.isSet()) {
        obj.insert(QString("accepted_gift_types"), ::tele_rest::toJsonValue(m_accepted_gift_types));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::tele_rest::toJsonValue(m_username));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_is_forum_isSet) {
        obj.insert(QString("is_forum"), ::tele_rest::toJsonValue(m_is_forum));
    }
    if (m_photo.isSet()) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    if (m_active_usernames.size() > 0) {
        obj.insert(QString("active_usernames"), ::tele_rest::toJsonValue(m_active_usernames));
    }
    if (m_birthdate.isSet()) {
        obj.insert(QString("birthdate"), ::tele_rest::toJsonValue(m_birthdate));
    }
    if (m_business_intro.isSet()) {
        obj.insert(QString("business_intro"), ::tele_rest::toJsonValue(m_business_intro));
    }
    if (m_business_location.isSet()) {
        obj.insert(QString("business_location"), ::tele_rest::toJsonValue(m_business_location));
    }
    if (m_business_opening_hours.isSet()) {
        obj.insert(QString("business_opening_hours"), ::tele_rest::toJsonValue(m_business_opening_hours));
    }
    if (m_personal_chat.isSet()) {
        obj.insert(QString("personal_chat"), ::tele_rest::toJsonValue(m_personal_chat));
    }
    if (m_available_reactions.size() > 0) {
        obj.insert(QString("available_reactions"), ::tele_rest::toJsonValue(m_available_reactions));
    }
    if (m_background_custom_emoji_id_isSet) {
        obj.insert(QString("background_custom_emoji_id"), ::tele_rest::toJsonValue(m_background_custom_emoji_id));
    }
    if (m_profile_accent_color_id_isSet) {
        obj.insert(QString("profile_accent_color_id"), ::tele_rest::toJsonValue(m_profile_accent_color_id));
    }
    if (m_profile_background_custom_emoji_id_isSet) {
        obj.insert(QString("profile_background_custom_emoji_id"), ::tele_rest::toJsonValue(m_profile_background_custom_emoji_id));
    }
    if (m_emoji_status_custom_emoji_id_isSet) {
        obj.insert(QString("emoji_status_custom_emoji_id"), ::tele_rest::toJsonValue(m_emoji_status_custom_emoji_id));
    }
    if (m_emoji_status_expiration_date_isSet) {
        obj.insert(QString("emoji_status_expiration_date"), ::tele_rest::toJsonValue(m_emoji_status_expiration_date));
    }
    if (m_bio_isSet) {
        obj.insert(QString("bio"), ::tele_rest::toJsonValue(m_bio));
    }
    if (m_has_private_forwards_isSet) {
        obj.insert(QString("has_private_forwards"), ::tele_rest::toJsonValue(m_has_private_forwards));
    }
    if (m_has_restricted_voice_and_video_messages_isSet) {
        obj.insert(QString("has_restricted_voice_and_video_messages"), ::tele_rest::toJsonValue(m_has_restricted_voice_and_video_messages));
    }
    if (m_join_to_send_messages_isSet) {
        obj.insert(QString("join_to_send_messages"), ::tele_rest::toJsonValue(m_join_to_send_messages));
    }
    if (m_join_by_request_isSet) {
        obj.insert(QString("join_by_request"), ::tele_rest::toJsonValue(m_join_by_request));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_invite_link_isSet) {
        obj.insert(QString("invite_link"), ::tele_rest::toJsonValue(m_invite_link));
    }
    if (m_pinned_message.isSet()) {
        obj.insert(QString("pinned_message"), ::tele_rest::toJsonValue(m_pinned_message));
    }
    if (m_permissions.isSet()) {
        obj.insert(QString("permissions"), ::tele_rest::toJsonValue(m_permissions));
    }
    if (m_can_send_paid_media_isSet) {
        obj.insert(QString("can_send_paid_media"), ::tele_rest::toJsonValue(m_can_send_paid_media));
    }
    if (m_slow_mode_delay_isSet) {
        obj.insert(QString("slow_mode_delay"), ::tele_rest::toJsonValue(m_slow_mode_delay));
    }
    if (m_unrestrict_boost_count_isSet) {
        obj.insert(QString("unrestrict_boost_count"), ::tele_rest::toJsonValue(m_unrestrict_boost_count));
    }
    if (m_message_auto_delete_time_isSet) {
        obj.insert(QString("message_auto_delete_time"), ::tele_rest::toJsonValue(m_message_auto_delete_time));
    }
    if (m_has_aggressive_anti_spam_enabled_isSet) {
        obj.insert(QString("has_aggressive_anti_spam_enabled"), ::tele_rest::toJsonValue(m_has_aggressive_anti_spam_enabled));
    }
    if (m_has_hidden_members_isSet) {
        obj.insert(QString("has_hidden_members"), ::tele_rest::toJsonValue(m_has_hidden_members));
    }
    if (m_has_protected_content_isSet) {
        obj.insert(QString("has_protected_content"), ::tele_rest::toJsonValue(m_has_protected_content));
    }
    if (m_has_visible_history_isSet) {
        obj.insert(QString("has_visible_history"), ::tele_rest::toJsonValue(m_has_visible_history));
    }
    if (m_sticker_set_name_isSet) {
        obj.insert(QString("sticker_set_name"), ::tele_rest::toJsonValue(m_sticker_set_name));
    }
    if (m_can_set_sticker_set_isSet) {
        obj.insert(QString("can_set_sticker_set"), ::tele_rest::toJsonValue(m_can_set_sticker_set));
    }
    if (m_custom_emoji_sticker_set_name_isSet) {
        obj.insert(QString("custom_emoji_sticker_set_name"), ::tele_rest::toJsonValue(m_custom_emoji_sticker_set_name));
    }
    if (m_linked_chat_id_isSet) {
        obj.insert(QString("linked_chat_id"), ::tele_rest::toJsonValue(m_linked_chat_id));
    }
    if (m_location.isSet()) {
        obj.insert(QString("location"), ::tele_rest::toJsonValue(m_location));
    }
    return obj;
}

qint32 OAIChatFullInfo::getId() const {
    return m_id;
}
void OAIChatFullInfo::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIChatFullInfo::is_id_Set() const{
    return m_id_isSet;
}

bool OAIChatFullInfo::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIChatFullInfo::getType() const {
    return m_type;
}
void OAIChatFullInfo::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIChatFullInfo::is_type_Set() const{
    return m_type_isSet;
}

bool OAIChatFullInfo::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIChatFullInfo::getAccentColorId() const {
    return m_accent_color_id;
}
void OAIChatFullInfo::setAccentColorId(const qint32 &accent_color_id) {
    m_accent_color_id = accent_color_id;
    m_accent_color_id_isSet = true;
}

bool OAIChatFullInfo::is_accent_color_id_Set() const{
    return m_accent_color_id_isSet;
}

bool OAIChatFullInfo::is_accent_color_id_Valid() const{
    return m_accent_color_id_isValid;
}

qint32 OAIChatFullInfo::getMaxReactionCount() const {
    return m_max_reaction_count;
}
void OAIChatFullInfo::setMaxReactionCount(const qint32 &max_reaction_count) {
    m_max_reaction_count = max_reaction_count;
    m_max_reaction_count_isSet = true;
}

bool OAIChatFullInfo::is_max_reaction_count_Set() const{
    return m_max_reaction_count_isSet;
}

bool OAIChatFullInfo::is_max_reaction_count_Valid() const{
    return m_max_reaction_count_isValid;
}

OAIAcceptedGiftTypes OAIChatFullInfo::getAcceptedGiftTypes() const {
    return m_accepted_gift_types;
}
void OAIChatFullInfo::setAcceptedGiftTypes(const OAIAcceptedGiftTypes &accepted_gift_types) {
    m_accepted_gift_types = accepted_gift_types;
    m_accepted_gift_types_isSet = true;
}

bool OAIChatFullInfo::is_accepted_gift_types_Set() const{
    return m_accepted_gift_types_isSet;
}

bool OAIChatFullInfo::is_accepted_gift_types_Valid() const{
    return m_accepted_gift_types_isValid;
}

QString OAIChatFullInfo::getTitle() const {
    return m_title;
}
void OAIChatFullInfo::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIChatFullInfo::is_title_Set() const{
    return m_title_isSet;
}

bool OAIChatFullInfo::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIChatFullInfo::getUsername() const {
    return m_username;
}
void OAIChatFullInfo::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIChatFullInfo::is_username_Set() const{
    return m_username_isSet;
}

bool OAIChatFullInfo::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIChatFullInfo::getFirstName() const {
    return m_first_name;
}
void OAIChatFullInfo::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAIChatFullInfo::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAIChatFullInfo::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAIChatFullInfo::getLastName() const {
    return m_last_name;
}
void OAIChatFullInfo::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAIChatFullInfo::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAIChatFullInfo::is_last_name_Valid() const{
    return m_last_name_isValid;
}

bool OAIChatFullInfo::isIsForum() const {
    return m_is_forum;
}
void OAIChatFullInfo::setIsForum(const bool &is_forum) {
    m_is_forum = is_forum;
    m_is_forum_isSet = true;
}

bool OAIChatFullInfo::is_is_forum_Set() const{
    return m_is_forum_isSet;
}

bool OAIChatFullInfo::is_is_forum_Valid() const{
    return m_is_forum_isValid;
}

OAIChatPhoto OAIChatFullInfo::getPhoto() const {
    return m_photo;
}
void OAIChatFullInfo::setPhoto(const OAIChatPhoto &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAIChatFullInfo::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAIChatFullInfo::is_photo_Valid() const{
    return m_photo_isValid;
}

QList<QString> OAIChatFullInfo::getActiveUsernames() const {
    return m_active_usernames;
}
void OAIChatFullInfo::setActiveUsernames(const QList<QString> &active_usernames) {
    m_active_usernames = active_usernames;
    m_active_usernames_isSet = true;
}

bool OAIChatFullInfo::is_active_usernames_Set() const{
    return m_active_usernames_isSet;
}

bool OAIChatFullInfo::is_active_usernames_Valid() const{
    return m_active_usernames_isValid;
}

OAIBirthdate OAIChatFullInfo::getBirthdate() const {
    return m_birthdate;
}
void OAIChatFullInfo::setBirthdate(const OAIBirthdate &birthdate) {
    m_birthdate = birthdate;
    m_birthdate_isSet = true;
}

bool OAIChatFullInfo::is_birthdate_Set() const{
    return m_birthdate_isSet;
}

bool OAIChatFullInfo::is_birthdate_Valid() const{
    return m_birthdate_isValid;
}

OAIBusinessIntro OAIChatFullInfo::getBusinessIntro() const {
    return m_business_intro;
}
void OAIChatFullInfo::setBusinessIntro(const OAIBusinessIntro &business_intro) {
    m_business_intro = business_intro;
    m_business_intro_isSet = true;
}

bool OAIChatFullInfo::is_business_intro_Set() const{
    return m_business_intro_isSet;
}

bool OAIChatFullInfo::is_business_intro_Valid() const{
    return m_business_intro_isValid;
}

OAIBusinessLocation OAIChatFullInfo::getBusinessLocation() const {
    return m_business_location;
}
void OAIChatFullInfo::setBusinessLocation(const OAIBusinessLocation &business_location) {
    m_business_location = business_location;
    m_business_location_isSet = true;
}

bool OAIChatFullInfo::is_business_location_Set() const{
    return m_business_location_isSet;
}

bool OAIChatFullInfo::is_business_location_Valid() const{
    return m_business_location_isValid;
}

OAIBusinessOpeningHours OAIChatFullInfo::getBusinessOpeningHours() const {
    return m_business_opening_hours;
}
void OAIChatFullInfo::setBusinessOpeningHours(const OAIBusinessOpeningHours &business_opening_hours) {
    m_business_opening_hours = business_opening_hours;
    m_business_opening_hours_isSet = true;
}

bool OAIChatFullInfo::is_business_opening_hours_Set() const{
    return m_business_opening_hours_isSet;
}

bool OAIChatFullInfo::is_business_opening_hours_Valid() const{
    return m_business_opening_hours_isValid;
}

OAIChat OAIChatFullInfo::getPersonalChat() const {
    return m_personal_chat;
}
void OAIChatFullInfo::setPersonalChat(const OAIChat &personal_chat) {
    m_personal_chat = personal_chat;
    m_personal_chat_isSet = true;
}

bool OAIChatFullInfo::is_personal_chat_Set() const{
    return m_personal_chat_isSet;
}

bool OAIChatFullInfo::is_personal_chat_Valid() const{
    return m_personal_chat_isValid;
}

QList<OAIReactionType> OAIChatFullInfo::getAvailableReactions() const {
    return m_available_reactions;
}
void OAIChatFullInfo::setAvailableReactions(const QList<OAIReactionType> &available_reactions) {
    m_available_reactions = available_reactions;
    m_available_reactions_isSet = true;
}

bool OAIChatFullInfo::is_available_reactions_Set() const{
    return m_available_reactions_isSet;
}

bool OAIChatFullInfo::is_available_reactions_Valid() const{
    return m_available_reactions_isValid;
}

QString OAIChatFullInfo::getBackgroundCustomEmojiId() const {
    return m_background_custom_emoji_id;
}
void OAIChatFullInfo::setBackgroundCustomEmojiId(const QString &background_custom_emoji_id) {
    m_background_custom_emoji_id = background_custom_emoji_id;
    m_background_custom_emoji_id_isSet = true;
}

bool OAIChatFullInfo::is_background_custom_emoji_id_Set() const{
    return m_background_custom_emoji_id_isSet;
}

bool OAIChatFullInfo::is_background_custom_emoji_id_Valid() const{
    return m_background_custom_emoji_id_isValid;
}

qint32 OAIChatFullInfo::getProfileAccentColorId() const {
    return m_profile_accent_color_id;
}
void OAIChatFullInfo::setProfileAccentColorId(const qint32 &profile_accent_color_id) {
    m_profile_accent_color_id = profile_accent_color_id;
    m_profile_accent_color_id_isSet = true;
}

bool OAIChatFullInfo::is_profile_accent_color_id_Set() const{
    return m_profile_accent_color_id_isSet;
}

bool OAIChatFullInfo::is_profile_accent_color_id_Valid() const{
    return m_profile_accent_color_id_isValid;
}

QString OAIChatFullInfo::getProfileBackgroundCustomEmojiId() const {
    return m_profile_background_custom_emoji_id;
}
void OAIChatFullInfo::setProfileBackgroundCustomEmojiId(const QString &profile_background_custom_emoji_id) {
    m_profile_background_custom_emoji_id = profile_background_custom_emoji_id;
    m_profile_background_custom_emoji_id_isSet = true;
}

bool OAIChatFullInfo::is_profile_background_custom_emoji_id_Set() const{
    return m_profile_background_custom_emoji_id_isSet;
}

bool OAIChatFullInfo::is_profile_background_custom_emoji_id_Valid() const{
    return m_profile_background_custom_emoji_id_isValid;
}

QString OAIChatFullInfo::getEmojiStatusCustomEmojiId() const {
    return m_emoji_status_custom_emoji_id;
}
void OAIChatFullInfo::setEmojiStatusCustomEmojiId(const QString &emoji_status_custom_emoji_id) {
    m_emoji_status_custom_emoji_id = emoji_status_custom_emoji_id;
    m_emoji_status_custom_emoji_id_isSet = true;
}

bool OAIChatFullInfo::is_emoji_status_custom_emoji_id_Set() const{
    return m_emoji_status_custom_emoji_id_isSet;
}

bool OAIChatFullInfo::is_emoji_status_custom_emoji_id_Valid() const{
    return m_emoji_status_custom_emoji_id_isValid;
}

qint32 OAIChatFullInfo::getEmojiStatusExpirationDate() const {
    return m_emoji_status_expiration_date;
}
void OAIChatFullInfo::setEmojiStatusExpirationDate(const qint32 &emoji_status_expiration_date) {
    m_emoji_status_expiration_date = emoji_status_expiration_date;
    m_emoji_status_expiration_date_isSet = true;
}

bool OAIChatFullInfo::is_emoji_status_expiration_date_Set() const{
    return m_emoji_status_expiration_date_isSet;
}

bool OAIChatFullInfo::is_emoji_status_expiration_date_Valid() const{
    return m_emoji_status_expiration_date_isValid;
}

QString OAIChatFullInfo::getBio() const {
    return m_bio;
}
void OAIChatFullInfo::setBio(const QString &bio) {
    m_bio = bio;
    m_bio_isSet = true;
}

bool OAIChatFullInfo::is_bio_Set() const{
    return m_bio_isSet;
}

bool OAIChatFullInfo::is_bio_Valid() const{
    return m_bio_isValid;
}

bool OAIChatFullInfo::isHasPrivateForwards() const {
    return m_has_private_forwards;
}
void OAIChatFullInfo::setHasPrivateForwards(const bool &has_private_forwards) {
    m_has_private_forwards = has_private_forwards;
    m_has_private_forwards_isSet = true;
}

bool OAIChatFullInfo::is_has_private_forwards_Set() const{
    return m_has_private_forwards_isSet;
}

bool OAIChatFullInfo::is_has_private_forwards_Valid() const{
    return m_has_private_forwards_isValid;
}

bool OAIChatFullInfo::isHasRestrictedVoiceAndVideoMessages() const {
    return m_has_restricted_voice_and_video_messages;
}
void OAIChatFullInfo::setHasRestrictedVoiceAndVideoMessages(const bool &has_restricted_voice_and_video_messages) {
    m_has_restricted_voice_and_video_messages = has_restricted_voice_and_video_messages;
    m_has_restricted_voice_and_video_messages_isSet = true;
}

bool OAIChatFullInfo::is_has_restricted_voice_and_video_messages_Set() const{
    return m_has_restricted_voice_and_video_messages_isSet;
}

bool OAIChatFullInfo::is_has_restricted_voice_and_video_messages_Valid() const{
    return m_has_restricted_voice_and_video_messages_isValid;
}

bool OAIChatFullInfo::isJoinToSendMessages() const {
    return m_join_to_send_messages;
}
void OAIChatFullInfo::setJoinToSendMessages(const bool &join_to_send_messages) {
    m_join_to_send_messages = join_to_send_messages;
    m_join_to_send_messages_isSet = true;
}

bool OAIChatFullInfo::is_join_to_send_messages_Set() const{
    return m_join_to_send_messages_isSet;
}

bool OAIChatFullInfo::is_join_to_send_messages_Valid() const{
    return m_join_to_send_messages_isValid;
}

bool OAIChatFullInfo::isJoinByRequest() const {
    return m_join_by_request;
}
void OAIChatFullInfo::setJoinByRequest(const bool &join_by_request) {
    m_join_by_request = join_by_request;
    m_join_by_request_isSet = true;
}

bool OAIChatFullInfo::is_join_by_request_Set() const{
    return m_join_by_request_isSet;
}

bool OAIChatFullInfo::is_join_by_request_Valid() const{
    return m_join_by_request_isValid;
}

QString OAIChatFullInfo::getDescription() const {
    return m_description;
}
void OAIChatFullInfo::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIChatFullInfo::is_description_Set() const{
    return m_description_isSet;
}

bool OAIChatFullInfo::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIChatFullInfo::getInviteLink() const {
    return m_invite_link;
}
void OAIChatFullInfo::setInviteLink(const QString &invite_link) {
    m_invite_link = invite_link;
    m_invite_link_isSet = true;
}

bool OAIChatFullInfo::is_invite_link_Set() const{
    return m_invite_link_isSet;
}

bool OAIChatFullInfo::is_invite_link_Valid() const{
    return m_invite_link_isValid;
}

OAIMessage OAIChatFullInfo::getPinnedMessage() const {
    return m_pinned_message;
}
void OAIChatFullInfo::setPinnedMessage(const OAIMessage &pinned_message) {
    m_pinned_message = pinned_message;
    m_pinned_message_isSet = true;
}

bool OAIChatFullInfo::is_pinned_message_Set() const{
    return m_pinned_message_isSet;
}

bool OAIChatFullInfo::is_pinned_message_Valid() const{
    return m_pinned_message_isValid;
}

OAIChatPermissions OAIChatFullInfo::getPermissions() const {
    return m_permissions;
}
void OAIChatFullInfo::setPermissions(const OAIChatPermissions &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAIChatFullInfo::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAIChatFullInfo::is_permissions_Valid() const{
    return m_permissions_isValid;
}

bool OAIChatFullInfo::isCanSendPaidMedia() const {
    return m_can_send_paid_media;
}
void OAIChatFullInfo::setCanSendPaidMedia(const bool &can_send_paid_media) {
    m_can_send_paid_media = can_send_paid_media;
    m_can_send_paid_media_isSet = true;
}

bool OAIChatFullInfo::is_can_send_paid_media_Set() const{
    return m_can_send_paid_media_isSet;
}

bool OAIChatFullInfo::is_can_send_paid_media_Valid() const{
    return m_can_send_paid_media_isValid;
}

qint32 OAIChatFullInfo::getSlowModeDelay() const {
    return m_slow_mode_delay;
}
void OAIChatFullInfo::setSlowModeDelay(const qint32 &slow_mode_delay) {
    m_slow_mode_delay = slow_mode_delay;
    m_slow_mode_delay_isSet = true;
}

bool OAIChatFullInfo::is_slow_mode_delay_Set() const{
    return m_slow_mode_delay_isSet;
}

bool OAIChatFullInfo::is_slow_mode_delay_Valid() const{
    return m_slow_mode_delay_isValid;
}

qint32 OAIChatFullInfo::getUnrestrictBoostCount() const {
    return m_unrestrict_boost_count;
}
void OAIChatFullInfo::setUnrestrictBoostCount(const qint32 &unrestrict_boost_count) {
    m_unrestrict_boost_count = unrestrict_boost_count;
    m_unrestrict_boost_count_isSet = true;
}

bool OAIChatFullInfo::is_unrestrict_boost_count_Set() const{
    return m_unrestrict_boost_count_isSet;
}

bool OAIChatFullInfo::is_unrestrict_boost_count_Valid() const{
    return m_unrestrict_boost_count_isValid;
}

qint32 OAIChatFullInfo::getMessageAutoDeleteTime() const {
    return m_message_auto_delete_time;
}
void OAIChatFullInfo::setMessageAutoDeleteTime(const qint32 &message_auto_delete_time) {
    m_message_auto_delete_time = message_auto_delete_time;
    m_message_auto_delete_time_isSet = true;
}

bool OAIChatFullInfo::is_message_auto_delete_time_Set() const{
    return m_message_auto_delete_time_isSet;
}

bool OAIChatFullInfo::is_message_auto_delete_time_Valid() const{
    return m_message_auto_delete_time_isValid;
}

bool OAIChatFullInfo::isHasAggressiveAntiSpamEnabled() const {
    return m_has_aggressive_anti_spam_enabled;
}
void OAIChatFullInfo::setHasAggressiveAntiSpamEnabled(const bool &has_aggressive_anti_spam_enabled) {
    m_has_aggressive_anti_spam_enabled = has_aggressive_anti_spam_enabled;
    m_has_aggressive_anti_spam_enabled_isSet = true;
}

bool OAIChatFullInfo::is_has_aggressive_anti_spam_enabled_Set() const{
    return m_has_aggressive_anti_spam_enabled_isSet;
}

bool OAIChatFullInfo::is_has_aggressive_anti_spam_enabled_Valid() const{
    return m_has_aggressive_anti_spam_enabled_isValid;
}

bool OAIChatFullInfo::isHasHiddenMembers() const {
    return m_has_hidden_members;
}
void OAIChatFullInfo::setHasHiddenMembers(const bool &has_hidden_members) {
    m_has_hidden_members = has_hidden_members;
    m_has_hidden_members_isSet = true;
}

bool OAIChatFullInfo::is_has_hidden_members_Set() const{
    return m_has_hidden_members_isSet;
}

bool OAIChatFullInfo::is_has_hidden_members_Valid() const{
    return m_has_hidden_members_isValid;
}

bool OAIChatFullInfo::isHasProtectedContent() const {
    return m_has_protected_content;
}
void OAIChatFullInfo::setHasProtectedContent(const bool &has_protected_content) {
    m_has_protected_content = has_protected_content;
    m_has_protected_content_isSet = true;
}

bool OAIChatFullInfo::is_has_protected_content_Set() const{
    return m_has_protected_content_isSet;
}

bool OAIChatFullInfo::is_has_protected_content_Valid() const{
    return m_has_protected_content_isValid;
}

bool OAIChatFullInfo::isHasVisibleHistory() const {
    return m_has_visible_history;
}
void OAIChatFullInfo::setHasVisibleHistory(const bool &has_visible_history) {
    m_has_visible_history = has_visible_history;
    m_has_visible_history_isSet = true;
}

bool OAIChatFullInfo::is_has_visible_history_Set() const{
    return m_has_visible_history_isSet;
}

bool OAIChatFullInfo::is_has_visible_history_Valid() const{
    return m_has_visible_history_isValid;
}

QString OAIChatFullInfo::getStickerSetName() const {
    return m_sticker_set_name;
}
void OAIChatFullInfo::setStickerSetName(const QString &sticker_set_name) {
    m_sticker_set_name = sticker_set_name;
    m_sticker_set_name_isSet = true;
}

bool OAIChatFullInfo::is_sticker_set_name_Set() const{
    return m_sticker_set_name_isSet;
}

bool OAIChatFullInfo::is_sticker_set_name_Valid() const{
    return m_sticker_set_name_isValid;
}

bool OAIChatFullInfo::isCanSetStickerSet() const {
    return m_can_set_sticker_set;
}
void OAIChatFullInfo::setCanSetStickerSet(const bool &can_set_sticker_set) {
    m_can_set_sticker_set = can_set_sticker_set;
    m_can_set_sticker_set_isSet = true;
}

bool OAIChatFullInfo::is_can_set_sticker_set_Set() const{
    return m_can_set_sticker_set_isSet;
}

bool OAIChatFullInfo::is_can_set_sticker_set_Valid() const{
    return m_can_set_sticker_set_isValid;
}

QString OAIChatFullInfo::getCustomEmojiStickerSetName() const {
    return m_custom_emoji_sticker_set_name;
}
void OAIChatFullInfo::setCustomEmojiStickerSetName(const QString &custom_emoji_sticker_set_name) {
    m_custom_emoji_sticker_set_name = custom_emoji_sticker_set_name;
    m_custom_emoji_sticker_set_name_isSet = true;
}

bool OAIChatFullInfo::is_custom_emoji_sticker_set_name_Set() const{
    return m_custom_emoji_sticker_set_name_isSet;
}

bool OAIChatFullInfo::is_custom_emoji_sticker_set_name_Valid() const{
    return m_custom_emoji_sticker_set_name_isValid;
}

qint32 OAIChatFullInfo::getLinkedChatId() const {
    return m_linked_chat_id;
}
void OAIChatFullInfo::setLinkedChatId(const qint32 &linked_chat_id) {
    m_linked_chat_id = linked_chat_id;
    m_linked_chat_id_isSet = true;
}

bool OAIChatFullInfo::is_linked_chat_id_Set() const{
    return m_linked_chat_id_isSet;
}

bool OAIChatFullInfo::is_linked_chat_id_Valid() const{
    return m_linked_chat_id_isValid;
}

OAIChatLocation OAIChatFullInfo::getLocation() const {
    return m_location;
}
void OAIChatFullInfo::setLocation(const OAIChatLocation &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAIChatFullInfo::is_location_Set() const{
    return m_location_isSet;
}

bool OAIChatFullInfo::is_location_Valid() const{
    return m_location_isValid;
}

bool OAIChatFullInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_accent_color_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_reaction_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_accepted_gift_types.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_forum_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_active_usernames.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_birthdate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_intro.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_opening_hours.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_personal_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_reactions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_background_custom_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_profile_accent_color_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_profile_background_custom_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_status_custom_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_status_expiration_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bio_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_private_forwards_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_restricted_voice_and_video_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_join_to_send_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_join_by_request_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invite_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pinned_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_permissions.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_paid_media_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_slow_mode_delay_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unrestrict_boost_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_auto_delete_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_aggressive_anti_spam_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_hidden_members_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_protected_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_visible_history_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker_set_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_set_sticker_set_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_emoji_sticker_set_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_linked_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_location.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatFullInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_accent_color_id_isValid && m_max_reaction_count_isValid && m_accepted_gift_types_isValid && true;
}

} // namespace tele_rest
