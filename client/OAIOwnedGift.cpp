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

#include "OAIOwnedGift.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIOwnedGift::OAIOwnedGift(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOwnedGift::OAIOwnedGift() {
    this->initializeModel();
}

OAIOwnedGift::~OAIOwnedGift() {}

void OAIOwnedGift::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_send_date_isSet = false;
    m_send_date_isValid = false;

    m_owned_gift_id_isSet = false;
    m_owned_gift_id_isValid = false;

    m_sender_user_isSet = false;
    m_sender_user_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_entities_isSet = false;
    m_entities_isValid = false;

    m_is_private_isSet = false;
    m_is_private_isValid = false;

    m_is_saved_isSet = false;
    m_is_saved_isValid = false;

    m_can_be_upgraded_isSet = false;
    m_can_be_upgraded_isValid = false;

    m_was_refunded_isSet = false;
    m_was_refunded_isValid = false;

    m_convert_star_count_isSet = false;
    m_convert_star_count_isValid = false;

    m_prepaid_upgrade_star_count_isSet = false;
    m_prepaid_upgrade_star_count_isValid = false;

    m_can_be_transferred_isSet = false;
    m_can_be_transferred_isValid = false;

    m_transfer_star_count_isSet = false;
    m_transfer_star_count_isValid = false;
}

void OAIOwnedGift::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOwnedGift::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_send_date_isValid = ::tele_rest::fromJsonValue(m_send_date, json[QString("send_date")]);
    m_send_date_isSet = !json[QString("send_date")].isNull() && m_send_date_isValid;

    m_owned_gift_id_isValid = ::tele_rest::fromJsonValue(m_owned_gift_id, json[QString("owned_gift_id")]);
    m_owned_gift_id_isSet = !json[QString("owned_gift_id")].isNull() && m_owned_gift_id_isValid;

    m_sender_user_isValid = ::tele_rest::fromJsonValue(m_sender_user, json[QString("sender_user")]);
    m_sender_user_isSet = !json[QString("sender_user")].isNull() && m_sender_user_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_entities_isValid = ::tele_rest::fromJsonValue(m_entities, json[QString("entities")]);
    m_entities_isSet = !json[QString("entities")].isNull() && m_entities_isValid;

    m_is_private_isValid = ::tele_rest::fromJsonValue(m_is_private, json[QString("is_private")]);
    m_is_private_isSet = !json[QString("is_private")].isNull() && m_is_private_isValid;

    m_is_saved_isValid = ::tele_rest::fromJsonValue(m_is_saved, json[QString("is_saved")]);
    m_is_saved_isSet = !json[QString("is_saved")].isNull() && m_is_saved_isValid;

    m_can_be_upgraded_isValid = ::tele_rest::fromJsonValue(m_can_be_upgraded, json[QString("can_be_upgraded")]);
    m_can_be_upgraded_isSet = !json[QString("can_be_upgraded")].isNull() && m_can_be_upgraded_isValid;

    m_was_refunded_isValid = ::tele_rest::fromJsonValue(m_was_refunded, json[QString("was_refunded")]);
    m_was_refunded_isSet = !json[QString("was_refunded")].isNull() && m_was_refunded_isValid;

    m_convert_star_count_isValid = ::tele_rest::fromJsonValue(m_convert_star_count, json[QString("convert_star_count")]);
    m_convert_star_count_isSet = !json[QString("convert_star_count")].isNull() && m_convert_star_count_isValid;

    m_prepaid_upgrade_star_count_isValid = ::tele_rest::fromJsonValue(m_prepaid_upgrade_star_count, json[QString("prepaid_upgrade_star_count")]);
    m_prepaid_upgrade_star_count_isSet = !json[QString("prepaid_upgrade_star_count")].isNull() && m_prepaid_upgrade_star_count_isValid;

    m_can_be_transferred_isValid = ::tele_rest::fromJsonValue(m_can_be_transferred, json[QString("can_be_transferred")]);
    m_can_be_transferred_isSet = !json[QString("can_be_transferred")].isNull() && m_can_be_transferred_isValid;

    m_transfer_star_count_isValid = ::tele_rest::fromJsonValue(m_transfer_star_count, json[QString("transfer_star_count")]);
    m_transfer_star_count_isSet = !json[QString("transfer_star_count")].isNull() && m_transfer_star_count_isValid;
}

QString OAIOwnedGift::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOwnedGift::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_send_date_isSet) {
        obj.insert(QString("send_date"), ::tele_rest::toJsonValue(m_send_date));
    }
    if (m_owned_gift_id_isSet) {
        obj.insert(QString("owned_gift_id"), ::tele_rest::toJsonValue(m_owned_gift_id));
    }
    if (m_sender_user.isSet()) {
        obj.insert(QString("sender_user"), ::tele_rest::toJsonValue(m_sender_user));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_entities.size() > 0) {
        obj.insert(QString("entities"), ::tele_rest::toJsonValue(m_entities));
    }
    if (m_is_private_isSet) {
        obj.insert(QString("is_private"), ::tele_rest::toJsonValue(m_is_private));
    }
    if (m_is_saved_isSet) {
        obj.insert(QString("is_saved"), ::tele_rest::toJsonValue(m_is_saved));
    }
    if (m_can_be_upgraded_isSet) {
        obj.insert(QString("can_be_upgraded"), ::tele_rest::toJsonValue(m_can_be_upgraded));
    }
    if (m_was_refunded_isSet) {
        obj.insert(QString("was_refunded"), ::tele_rest::toJsonValue(m_was_refunded));
    }
    if (m_convert_star_count_isSet) {
        obj.insert(QString("convert_star_count"), ::tele_rest::toJsonValue(m_convert_star_count));
    }
    if (m_prepaid_upgrade_star_count_isSet) {
        obj.insert(QString("prepaid_upgrade_star_count"), ::tele_rest::toJsonValue(m_prepaid_upgrade_star_count));
    }
    if (m_can_be_transferred_isSet) {
        obj.insert(QString("can_be_transferred"), ::tele_rest::toJsonValue(m_can_be_transferred));
    }
    if (m_transfer_star_count_isSet) {
        obj.insert(QString("transfer_star_count"), ::tele_rest::toJsonValue(m_transfer_star_count));
    }
    return obj;
}

QString OAIOwnedGift::getType() const {
    return m_type;
}
void OAIOwnedGift::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIOwnedGift::is_type_Set() const{
    return m_type_isSet;
}

bool OAIOwnedGift::is_type_Valid() const{
    return m_type_isValid;
}

OAIUniqueGift OAIOwnedGift::getGift() const {
    return m_gift;
}
void OAIOwnedGift::setGift(const OAIUniqueGift &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAIOwnedGift::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAIOwnedGift::is_gift_Valid() const{
    return m_gift_isValid;
}

qint32 OAIOwnedGift::getSendDate() const {
    return m_send_date;
}
void OAIOwnedGift::setSendDate(const qint32 &send_date) {
    m_send_date = send_date;
    m_send_date_isSet = true;
}

bool OAIOwnedGift::is_send_date_Set() const{
    return m_send_date_isSet;
}

bool OAIOwnedGift::is_send_date_Valid() const{
    return m_send_date_isValid;
}

QString OAIOwnedGift::getOwnedGiftId() const {
    return m_owned_gift_id;
}
void OAIOwnedGift::setOwnedGiftId(const QString &owned_gift_id) {
    m_owned_gift_id = owned_gift_id;
    m_owned_gift_id_isSet = true;
}

bool OAIOwnedGift::is_owned_gift_id_Set() const{
    return m_owned_gift_id_isSet;
}

bool OAIOwnedGift::is_owned_gift_id_Valid() const{
    return m_owned_gift_id_isValid;
}

OAIUser OAIOwnedGift::getSenderUser() const {
    return m_sender_user;
}
void OAIOwnedGift::setSenderUser(const OAIUser &sender_user) {
    m_sender_user = sender_user;
    m_sender_user_isSet = true;
}

bool OAIOwnedGift::is_sender_user_Set() const{
    return m_sender_user_isSet;
}

bool OAIOwnedGift::is_sender_user_Valid() const{
    return m_sender_user_isValid;
}

QString OAIOwnedGift::getText() const {
    return m_text;
}
void OAIOwnedGift::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIOwnedGift::is_text_Set() const{
    return m_text_isSet;
}

bool OAIOwnedGift::is_text_Valid() const{
    return m_text_isValid;
}

QList<OAIMessageEntity> OAIOwnedGift::getEntities() const {
    return m_entities;
}
void OAIOwnedGift::setEntities(const QList<OAIMessageEntity> &entities) {
    m_entities = entities;
    m_entities_isSet = true;
}

bool OAIOwnedGift::is_entities_Set() const{
    return m_entities_isSet;
}

bool OAIOwnedGift::is_entities_Valid() const{
    return m_entities_isValid;
}

bool OAIOwnedGift::isIsPrivate() const {
    return m_is_private;
}
void OAIOwnedGift::setIsPrivate(const bool &is_private) {
    m_is_private = is_private;
    m_is_private_isSet = true;
}

bool OAIOwnedGift::is_is_private_Set() const{
    return m_is_private_isSet;
}

bool OAIOwnedGift::is_is_private_Valid() const{
    return m_is_private_isValid;
}

bool OAIOwnedGift::isIsSaved() const {
    return m_is_saved;
}
void OAIOwnedGift::setIsSaved(const bool &is_saved) {
    m_is_saved = is_saved;
    m_is_saved_isSet = true;
}

bool OAIOwnedGift::is_is_saved_Set() const{
    return m_is_saved_isSet;
}

bool OAIOwnedGift::is_is_saved_Valid() const{
    return m_is_saved_isValid;
}

bool OAIOwnedGift::isCanBeUpgraded() const {
    return m_can_be_upgraded;
}
void OAIOwnedGift::setCanBeUpgraded(const bool &can_be_upgraded) {
    m_can_be_upgraded = can_be_upgraded;
    m_can_be_upgraded_isSet = true;
}

bool OAIOwnedGift::is_can_be_upgraded_Set() const{
    return m_can_be_upgraded_isSet;
}

bool OAIOwnedGift::is_can_be_upgraded_Valid() const{
    return m_can_be_upgraded_isValid;
}

bool OAIOwnedGift::isWasRefunded() const {
    return m_was_refunded;
}
void OAIOwnedGift::setWasRefunded(const bool &was_refunded) {
    m_was_refunded = was_refunded;
    m_was_refunded_isSet = true;
}

bool OAIOwnedGift::is_was_refunded_Set() const{
    return m_was_refunded_isSet;
}

bool OAIOwnedGift::is_was_refunded_Valid() const{
    return m_was_refunded_isValid;
}

qint32 OAIOwnedGift::getConvertStarCount() const {
    return m_convert_star_count;
}
void OAIOwnedGift::setConvertStarCount(const qint32 &convert_star_count) {
    m_convert_star_count = convert_star_count;
    m_convert_star_count_isSet = true;
}

bool OAIOwnedGift::is_convert_star_count_Set() const{
    return m_convert_star_count_isSet;
}

bool OAIOwnedGift::is_convert_star_count_Valid() const{
    return m_convert_star_count_isValid;
}

qint32 OAIOwnedGift::getPrepaidUpgradeStarCount() const {
    return m_prepaid_upgrade_star_count;
}
void OAIOwnedGift::setPrepaidUpgradeStarCount(const qint32 &prepaid_upgrade_star_count) {
    m_prepaid_upgrade_star_count = prepaid_upgrade_star_count;
    m_prepaid_upgrade_star_count_isSet = true;
}

bool OAIOwnedGift::is_prepaid_upgrade_star_count_Set() const{
    return m_prepaid_upgrade_star_count_isSet;
}

bool OAIOwnedGift::is_prepaid_upgrade_star_count_Valid() const{
    return m_prepaid_upgrade_star_count_isValid;
}

bool OAIOwnedGift::isCanBeTransferred() const {
    return m_can_be_transferred;
}
void OAIOwnedGift::setCanBeTransferred(const bool &can_be_transferred) {
    m_can_be_transferred = can_be_transferred;
    m_can_be_transferred_isSet = true;
}

bool OAIOwnedGift::is_can_be_transferred_Set() const{
    return m_can_be_transferred_isSet;
}

bool OAIOwnedGift::is_can_be_transferred_Valid() const{
    return m_can_be_transferred_isValid;
}

qint32 OAIOwnedGift::getTransferStarCount() const {
    return m_transfer_star_count;
}
void OAIOwnedGift::setTransferStarCount(const qint32 &transfer_star_count) {
    m_transfer_star_count = transfer_star_count;
    m_transfer_star_count_isSet = true;
}

bool OAIOwnedGift::is_transfer_star_count_Set() const{
    return m_transfer_star_count_isSet;
}

bool OAIOwnedGift::is_transfer_star_count_Valid() const{
    return m_transfer_star_count_isValid;
}

bool OAIOwnedGift::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_send_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owned_gift_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_private_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_saved_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_be_upgraded_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_was_refunded_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_convert_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prepaid_upgrade_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_be_transferred_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_transfer_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOwnedGift::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_gift_isValid && m_send_date_isValid && true;
}

} // namespace tele_rest
