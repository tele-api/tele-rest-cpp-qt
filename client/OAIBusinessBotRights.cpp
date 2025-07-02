/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIBusinessBotRights.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBusinessBotRights::OAIBusinessBotRights(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBusinessBotRights::OAIBusinessBotRights() {
    this->initializeModel();
}

OAIBusinessBotRights::~OAIBusinessBotRights() {}

void OAIBusinessBotRights::initializeModel() {

    m_can_reply_isSet = false;
    m_can_reply_isValid = false;

    m_can_read_messages_isSet = false;
    m_can_read_messages_isValid = false;

    m_can_delete_outgoing_messages_isSet = false;
    m_can_delete_outgoing_messages_isValid = false;

    m_can_delete_all_messages_isSet = false;
    m_can_delete_all_messages_isValid = false;

    m_can_edit_name_isSet = false;
    m_can_edit_name_isValid = false;

    m_can_edit_bio_isSet = false;
    m_can_edit_bio_isValid = false;

    m_can_edit_profile_photo_isSet = false;
    m_can_edit_profile_photo_isValid = false;

    m_can_edit_username_isSet = false;
    m_can_edit_username_isValid = false;

    m_can_change_gift_settings_isSet = false;
    m_can_change_gift_settings_isValid = false;

    m_can_view_gifts_and_stars_isSet = false;
    m_can_view_gifts_and_stars_isValid = false;

    m_can_convert_gifts_to_stars_isSet = false;
    m_can_convert_gifts_to_stars_isValid = false;

    m_can_transfer_and_upgrade_gifts_isSet = false;
    m_can_transfer_and_upgrade_gifts_isValid = false;

    m_can_transfer_stars_isSet = false;
    m_can_transfer_stars_isValid = false;

    m_can_manage_stories_isSet = false;
    m_can_manage_stories_isValid = false;
}

void OAIBusinessBotRights::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBusinessBotRights::fromJsonObject(QJsonObject json) {

    m_can_reply_isValid = ::tele_rest::fromJsonValue(m_can_reply, json[QString("can_reply")]);
    m_can_reply_isSet = !json[QString("can_reply")].isNull() && m_can_reply_isValid;

    m_can_read_messages_isValid = ::tele_rest::fromJsonValue(m_can_read_messages, json[QString("can_read_messages")]);
    m_can_read_messages_isSet = !json[QString("can_read_messages")].isNull() && m_can_read_messages_isValid;

    m_can_delete_outgoing_messages_isValid = ::tele_rest::fromJsonValue(m_can_delete_outgoing_messages, json[QString("can_delete_outgoing_messages")]);
    m_can_delete_outgoing_messages_isSet = !json[QString("can_delete_outgoing_messages")].isNull() && m_can_delete_outgoing_messages_isValid;

    m_can_delete_all_messages_isValid = ::tele_rest::fromJsonValue(m_can_delete_all_messages, json[QString("can_delete_all_messages")]);
    m_can_delete_all_messages_isSet = !json[QString("can_delete_all_messages")].isNull() && m_can_delete_all_messages_isValid;

    m_can_edit_name_isValid = ::tele_rest::fromJsonValue(m_can_edit_name, json[QString("can_edit_name")]);
    m_can_edit_name_isSet = !json[QString("can_edit_name")].isNull() && m_can_edit_name_isValid;

    m_can_edit_bio_isValid = ::tele_rest::fromJsonValue(m_can_edit_bio, json[QString("can_edit_bio")]);
    m_can_edit_bio_isSet = !json[QString("can_edit_bio")].isNull() && m_can_edit_bio_isValid;

    m_can_edit_profile_photo_isValid = ::tele_rest::fromJsonValue(m_can_edit_profile_photo, json[QString("can_edit_profile_photo")]);
    m_can_edit_profile_photo_isSet = !json[QString("can_edit_profile_photo")].isNull() && m_can_edit_profile_photo_isValid;

    m_can_edit_username_isValid = ::tele_rest::fromJsonValue(m_can_edit_username, json[QString("can_edit_username")]);
    m_can_edit_username_isSet = !json[QString("can_edit_username")].isNull() && m_can_edit_username_isValid;

    m_can_change_gift_settings_isValid = ::tele_rest::fromJsonValue(m_can_change_gift_settings, json[QString("can_change_gift_settings")]);
    m_can_change_gift_settings_isSet = !json[QString("can_change_gift_settings")].isNull() && m_can_change_gift_settings_isValid;

    m_can_view_gifts_and_stars_isValid = ::tele_rest::fromJsonValue(m_can_view_gifts_and_stars, json[QString("can_view_gifts_and_stars")]);
    m_can_view_gifts_and_stars_isSet = !json[QString("can_view_gifts_and_stars")].isNull() && m_can_view_gifts_and_stars_isValid;

    m_can_convert_gifts_to_stars_isValid = ::tele_rest::fromJsonValue(m_can_convert_gifts_to_stars, json[QString("can_convert_gifts_to_stars")]);
    m_can_convert_gifts_to_stars_isSet = !json[QString("can_convert_gifts_to_stars")].isNull() && m_can_convert_gifts_to_stars_isValid;

    m_can_transfer_and_upgrade_gifts_isValid = ::tele_rest::fromJsonValue(m_can_transfer_and_upgrade_gifts, json[QString("can_transfer_and_upgrade_gifts")]);
    m_can_transfer_and_upgrade_gifts_isSet = !json[QString("can_transfer_and_upgrade_gifts")].isNull() && m_can_transfer_and_upgrade_gifts_isValid;

    m_can_transfer_stars_isValid = ::tele_rest::fromJsonValue(m_can_transfer_stars, json[QString("can_transfer_stars")]);
    m_can_transfer_stars_isSet = !json[QString("can_transfer_stars")].isNull() && m_can_transfer_stars_isValid;

    m_can_manage_stories_isValid = ::tele_rest::fromJsonValue(m_can_manage_stories, json[QString("can_manage_stories")]);
    m_can_manage_stories_isSet = !json[QString("can_manage_stories")].isNull() && m_can_manage_stories_isValid;
}

QString OAIBusinessBotRights::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBusinessBotRights::asJsonObject() const {
    QJsonObject obj;
    if (m_can_reply_isSet) {
        obj.insert(QString("can_reply"), ::tele_rest::toJsonValue(m_can_reply));
    }
    if (m_can_read_messages_isSet) {
        obj.insert(QString("can_read_messages"), ::tele_rest::toJsonValue(m_can_read_messages));
    }
    if (m_can_delete_outgoing_messages_isSet) {
        obj.insert(QString("can_delete_outgoing_messages"), ::tele_rest::toJsonValue(m_can_delete_outgoing_messages));
    }
    if (m_can_delete_all_messages_isSet) {
        obj.insert(QString("can_delete_all_messages"), ::tele_rest::toJsonValue(m_can_delete_all_messages));
    }
    if (m_can_edit_name_isSet) {
        obj.insert(QString("can_edit_name"), ::tele_rest::toJsonValue(m_can_edit_name));
    }
    if (m_can_edit_bio_isSet) {
        obj.insert(QString("can_edit_bio"), ::tele_rest::toJsonValue(m_can_edit_bio));
    }
    if (m_can_edit_profile_photo_isSet) {
        obj.insert(QString("can_edit_profile_photo"), ::tele_rest::toJsonValue(m_can_edit_profile_photo));
    }
    if (m_can_edit_username_isSet) {
        obj.insert(QString("can_edit_username"), ::tele_rest::toJsonValue(m_can_edit_username));
    }
    if (m_can_change_gift_settings_isSet) {
        obj.insert(QString("can_change_gift_settings"), ::tele_rest::toJsonValue(m_can_change_gift_settings));
    }
    if (m_can_view_gifts_and_stars_isSet) {
        obj.insert(QString("can_view_gifts_and_stars"), ::tele_rest::toJsonValue(m_can_view_gifts_and_stars));
    }
    if (m_can_convert_gifts_to_stars_isSet) {
        obj.insert(QString("can_convert_gifts_to_stars"), ::tele_rest::toJsonValue(m_can_convert_gifts_to_stars));
    }
    if (m_can_transfer_and_upgrade_gifts_isSet) {
        obj.insert(QString("can_transfer_and_upgrade_gifts"), ::tele_rest::toJsonValue(m_can_transfer_and_upgrade_gifts));
    }
    if (m_can_transfer_stars_isSet) {
        obj.insert(QString("can_transfer_stars"), ::tele_rest::toJsonValue(m_can_transfer_stars));
    }
    if (m_can_manage_stories_isSet) {
        obj.insert(QString("can_manage_stories"), ::tele_rest::toJsonValue(m_can_manage_stories));
    }
    return obj;
}

bool OAIBusinessBotRights::isCanReply() const {
    return m_can_reply;
}
void OAIBusinessBotRights::setCanReply(const bool &can_reply) {
    m_can_reply = can_reply;
    m_can_reply_isSet = true;
}

bool OAIBusinessBotRights::is_can_reply_Set() const{
    return m_can_reply_isSet;
}

bool OAIBusinessBotRights::is_can_reply_Valid() const{
    return m_can_reply_isValid;
}

bool OAIBusinessBotRights::isCanReadMessages() const {
    return m_can_read_messages;
}
void OAIBusinessBotRights::setCanReadMessages(const bool &can_read_messages) {
    m_can_read_messages = can_read_messages;
    m_can_read_messages_isSet = true;
}

bool OAIBusinessBotRights::is_can_read_messages_Set() const{
    return m_can_read_messages_isSet;
}

bool OAIBusinessBotRights::is_can_read_messages_Valid() const{
    return m_can_read_messages_isValid;
}

bool OAIBusinessBotRights::isCanDeleteOutgoingMessages() const {
    return m_can_delete_outgoing_messages;
}
void OAIBusinessBotRights::setCanDeleteOutgoingMessages(const bool &can_delete_outgoing_messages) {
    m_can_delete_outgoing_messages = can_delete_outgoing_messages;
    m_can_delete_outgoing_messages_isSet = true;
}

bool OAIBusinessBotRights::is_can_delete_outgoing_messages_Set() const{
    return m_can_delete_outgoing_messages_isSet;
}

bool OAIBusinessBotRights::is_can_delete_outgoing_messages_Valid() const{
    return m_can_delete_outgoing_messages_isValid;
}

bool OAIBusinessBotRights::isCanDeleteAllMessages() const {
    return m_can_delete_all_messages;
}
void OAIBusinessBotRights::setCanDeleteAllMessages(const bool &can_delete_all_messages) {
    m_can_delete_all_messages = can_delete_all_messages;
    m_can_delete_all_messages_isSet = true;
}

bool OAIBusinessBotRights::is_can_delete_all_messages_Set() const{
    return m_can_delete_all_messages_isSet;
}

bool OAIBusinessBotRights::is_can_delete_all_messages_Valid() const{
    return m_can_delete_all_messages_isValid;
}

bool OAIBusinessBotRights::isCanEditName() const {
    return m_can_edit_name;
}
void OAIBusinessBotRights::setCanEditName(const bool &can_edit_name) {
    m_can_edit_name = can_edit_name;
    m_can_edit_name_isSet = true;
}

bool OAIBusinessBotRights::is_can_edit_name_Set() const{
    return m_can_edit_name_isSet;
}

bool OAIBusinessBotRights::is_can_edit_name_Valid() const{
    return m_can_edit_name_isValid;
}

bool OAIBusinessBotRights::isCanEditBio() const {
    return m_can_edit_bio;
}
void OAIBusinessBotRights::setCanEditBio(const bool &can_edit_bio) {
    m_can_edit_bio = can_edit_bio;
    m_can_edit_bio_isSet = true;
}

bool OAIBusinessBotRights::is_can_edit_bio_Set() const{
    return m_can_edit_bio_isSet;
}

bool OAIBusinessBotRights::is_can_edit_bio_Valid() const{
    return m_can_edit_bio_isValid;
}

bool OAIBusinessBotRights::isCanEditProfilePhoto() const {
    return m_can_edit_profile_photo;
}
void OAIBusinessBotRights::setCanEditProfilePhoto(const bool &can_edit_profile_photo) {
    m_can_edit_profile_photo = can_edit_profile_photo;
    m_can_edit_profile_photo_isSet = true;
}

bool OAIBusinessBotRights::is_can_edit_profile_photo_Set() const{
    return m_can_edit_profile_photo_isSet;
}

bool OAIBusinessBotRights::is_can_edit_profile_photo_Valid() const{
    return m_can_edit_profile_photo_isValid;
}

bool OAIBusinessBotRights::isCanEditUsername() const {
    return m_can_edit_username;
}
void OAIBusinessBotRights::setCanEditUsername(const bool &can_edit_username) {
    m_can_edit_username = can_edit_username;
    m_can_edit_username_isSet = true;
}

bool OAIBusinessBotRights::is_can_edit_username_Set() const{
    return m_can_edit_username_isSet;
}

bool OAIBusinessBotRights::is_can_edit_username_Valid() const{
    return m_can_edit_username_isValid;
}

bool OAIBusinessBotRights::isCanChangeGiftSettings() const {
    return m_can_change_gift_settings;
}
void OAIBusinessBotRights::setCanChangeGiftSettings(const bool &can_change_gift_settings) {
    m_can_change_gift_settings = can_change_gift_settings;
    m_can_change_gift_settings_isSet = true;
}

bool OAIBusinessBotRights::is_can_change_gift_settings_Set() const{
    return m_can_change_gift_settings_isSet;
}

bool OAIBusinessBotRights::is_can_change_gift_settings_Valid() const{
    return m_can_change_gift_settings_isValid;
}

bool OAIBusinessBotRights::isCanViewGiftsAndStars() const {
    return m_can_view_gifts_and_stars;
}
void OAIBusinessBotRights::setCanViewGiftsAndStars(const bool &can_view_gifts_and_stars) {
    m_can_view_gifts_and_stars = can_view_gifts_and_stars;
    m_can_view_gifts_and_stars_isSet = true;
}

bool OAIBusinessBotRights::is_can_view_gifts_and_stars_Set() const{
    return m_can_view_gifts_and_stars_isSet;
}

bool OAIBusinessBotRights::is_can_view_gifts_and_stars_Valid() const{
    return m_can_view_gifts_and_stars_isValid;
}

bool OAIBusinessBotRights::isCanConvertGiftsToStars() const {
    return m_can_convert_gifts_to_stars;
}
void OAIBusinessBotRights::setCanConvertGiftsToStars(const bool &can_convert_gifts_to_stars) {
    m_can_convert_gifts_to_stars = can_convert_gifts_to_stars;
    m_can_convert_gifts_to_stars_isSet = true;
}

bool OAIBusinessBotRights::is_can_convert_gifts_to_stars_Set() const{
    return m_can_convert_gifts_to_stars_isSet;
}

bool OAIBusinessBotRights::is_can_convert_gifts_to_stars_Valid() const{
    return m_can_convert_gifts_to_stars_isValid;
}

bool OAIBusinessBotRights::isCanTransferAndUpgradeGifts() const {
    return m_can_transfer_and_upgrade_gifts;
}
void OAIBusinessBotRights::setCanTransferAndUpgradeGifts(const bool &can_transfer_and_upgrade_gifts) {
    m_can_transfer_and_upgrade_gifts = can_transfer_and_upgrade_gifts;
    m_can_transfer_and_upgrade_gifts_isSet = true;
}

bool OAIBusinessBotRights::is_can_transfer_and_upgrade_gifts_Set() const{
    return m_can_transfer_and_upgrade_gifts_isSet;
}

bool OAIBusinessBotRights::is_can_transfer_and_upgrade_gifts_Valid() const{
    return m_can_transfer_and_upgrade_gifts_isValid;
}

bool OAIBusinessBotRights::isCanTransferStars() const {
    return m_can_transfer_stars;
}
void OAIBusinessBotRights::setCanTransferStars(const bool &can_transfer_stars) {
    m_can_transfer_stars = can_transfer_stars;
    m_can_transfer_stars_isSet = true;
}

bool OAIBusinessBotRights::is_can_transfer_stars_Set() const{
    return m_can_transfer_stars_isSet;
}

bool OAIBusinessBotRights::is_can_transfer_stars_Valid() const{
    return m_can_transfer_stars_isValid;
}

bool OAIBusinessBotRights::isCanManageStories() const {
    return m_can_manage_stories;
}
void OAIBusinessBotRights::setCanManageStories(const bool &can_manage_stories) {
    m_can_manage_stories = can_manage_stories;
    m_can_manage_stories_isSet = true;
}

bool OAIBusinessBotRights::is_can_manage_stories_Set() const{
    return m_can_manage_stories_isSet;
}

bool OAIBusinessBotRights::is_can_manage_stories_Valid() const{
    return m_can_manage_stories_isValid;
}

bool OAIBusinessBotRights::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_can_reply_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_read_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_delete_outgoing_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_delete_all_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_edit_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_edit_bio_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_edit_profile_photo_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_edit_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_change_gift_settings_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_view_gifts_and_stars_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_convert_gifts_to_stars_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_transfer_and_upgrade_gifts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_transfer_stars_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_manage_stories_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBusinessBotRights::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
