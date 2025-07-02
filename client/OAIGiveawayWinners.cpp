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

#include "OAIGiveawayWinners.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGiveawayWinners::OAIGiveawayWinners(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGiveawayWinners::OAIGiveawayWinners() {
    this->initializeModel();
}

OAIGiveawayWinners::~OAIGiveawayWinners() {}

void OAIGiveawayWinners::initializeModel() {

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_giveaway_message_id_isSet = false;
    m_giveaway_message_id_isValid = false;

    m_winners_selection_date_isSet = false;
    m_winners_selection_date_isValid = false;

    m_winner_count_isSet = false;
    m_winner_count_isValid = false;

    m_winners_isSet = false;
    m_winners_isValid = false;

    m_additional_chat_count_isSet = false;
    m_additional_chat_count_isValid = false;

    m_prize_star_count_isSet = false;
    m_prize_star_count_isValid = false;

    m_premium_subscription_month_count_isSet = false;
    m_premium_subscription_month_count_isValid = false;

    m_unclaimed_prize_count_isSet = false;
    m_unclaimed_prize_count_isValid = false;

    m_only_new_members_isSet = false;
    m_only_new_members_isValid = false;

    m_was_refunded_isSet = false;
    m_was_refunded_isValid = false;

    m_prize_description_isSet = false;
    m_prize_description_isValid = false;
}

void OAIGiveawayWinners::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGiveawayWinners::fromJsonObject(QJsonObject json) {

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_giveaway_message_id_isValid = ::tele_rest::fromJsonValue(m_giveaway_message_id, json[QString("giveaway_message_id")]);
    m_giveaway_message_id_isSet = !json[QString("giveaway_message_id")].isNull() && m_giveaway_message_id_isValid;

    m_winners_selection_date_isValid = ::tele_rest::fromJsonValue(m_winners_selection_date, json[QString("winners_selection_date")]);
    m_winners_selection_date_isSet = !json[QString("winners_selection_date")].isNull() && m_winners_selection_date_isValid;

    m_winner_count_isValid = ::tele_rest::fromJsonValue(m_winner_count, json[QString("winner_count")]);
    m_winner_count_isSet = !json[QString("winner_count")].isNull() && m_winner_count_isValid;

    m_winners_isValid = ::tele_rest::fromJsonValue(m_winners, json[QString("winners")]);
    m_winners_isSet = !json[QString("winners")].isNull() && m_winners_isValid;

    m_additional_chat_count_isValid = ::tele_rest::fromJsonValue(m_additional_chat_count, json[QString("additional_chat_count")]);
    m_additional_chat_count_isSet = !json[QString("additional_chat_count")].isNull() && m_additional_chat_count_isValid;

    m_prize_star_count_isValid = ::tele_rest::fromJsonValue(m_prize_star_count, json[QString("prize_star_count")]);
    m_prize_star_count_isSet = !json[QString("prize_star_count")].isNull() && m_prize_star_count_isValid;

    m_premium_subscription_month_count_isValid = ::tele_rest::fromJsonValue(m_premium_subscription_month_count, json[QString("premium_subscription_month_count")]);
    m_premium_subscription_month_count_isSet = !json[QString("premium_subscription_month_count")].isNull() && m_premium_subscription_month_count_isValid;

    m_unclaimed_prize_count_isValid = ::tele_rest::fromJsonValue(m_unclaimed_prize_count, json[QString("unclaimed_prize_count")]);
    m_unclaimed_prize_count_isSet = !json[QString("unclaimed_prize_count")].isNull() && m_unclaimed_prize_count_isValid;

    m_only_new_members_isValid = ::tele_rest::fromJsonValue(m_only_new_members, json[QString("only_new_members")]);
    m_only_new_members_isSet = !json[QString("only_new_members")].isNull() && m_only_new_members_isValid;

    m_was_refunded_isValid = ::tele_rest::fromJsonValue(m_was_refunded, json[QString("was_refunded")]);
    m_was_refunded_isSet = !json[QString("was_refunded")].isNull() && m_was_refunded_isValid;

    m_prize_description_isValid = ::tele_rest::fromJsonValue(m_prize_description, json[QString("prize_description")]);
    m_prize_description_isSet = !json[QString("prize_description")].isNull() && m_prize_description_isValid;
}

QString OAIGiveawayWinners::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGiveawayWinners::asJsonObject() const {
    QJsonObject obj;
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_giveaway_message_id_isSet) {
        obj.insert(QString("giveaway_message_id"), ::tele_rest::toJsonValue(m_giveaway_message_id));
    }
    if (m_winners_selection_date_isSet) {
        obj.insert(QString("winners_selection_date"), ::tele_rest::toJsonValue(m_winners_selection_date));
    }
    if (m_winner_count_isSet) {
        obj.insert(QString("winner_count"), ::tele_rest::toJsonValue(m_winner_count));
    }
    if (m_winners.size() > 0) {
        obj.insert(QString("winners"), ::tele_rest::toJsonValue(m_winners));
    }
    if (m_additional_chat_count_isSet) {
        obj.insert(QString("additional_chat_count"), ::tele_rest::toJsonValue(m_additional_chat_count));
    }
    if (m_prize_star_count_isSet) {
        obj.insert(QString("prize_star_count"), ::tele_rest::toJsonValue(m_prize_star_count));
    }
    if (m_premium_subscription_month_count_isSet) {
        obj.insert(QString("premium_subscription_month_count"), ::tele_rest::toJsonValue(m_premium_subscription_month_count));
    }
    if (m_unclaimed_prize_count_isSet) {
        obj.insert(QString("unclaimed_prize_count"), ::tele_rest::toJsonValue(m_unclaimed_prize_count));
    }
    if (m_only_new_members_isSet) {
        obj.insert(QString("only_new_members"), ::tele_rest::toJsonValue(m_only_new_members));
    }
    if (m_was_refunded_isSet) {
        obj.insert(QString("was_refunded"), ::tele_rest::toJsonValue(m_was_refunded));
    }
    if (m_prize_description_isSet) {
        obj.insert(QString("prize_description"), ::tele_rest::toJsonValue(m_prize_description));
    }
    return obj;
}

OAIChat OAIGiveawayWinners::getChat() const {
    return m_chat;
}
void OAIGiveawayWinners::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIGiveawayWinners::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIGiveawayWinners::is_chat_Valid() const{
    return m_chat_isValid;
}

qint32 OAIGiveawayWinners::getGiveawayMessageId() const {
    return m_giveaway_message_id;
}
void OAIGiveawayWinners::setGiveawayMessageId(const qint32 &giveaway_message_id) {
    m_giveaway_message_id = giveaway_message_id;
    m_giveaway_message_id_isSet = true;
}

bool OAIGiveawayWinners::is_giveaway_message_id_Set() const{
    return m_giveaway_message_id_isSet;
}

bool OAIGiveawayWinners::is_giveaway_message_id_Valid() const{
    return m_giveaway_message_id_isValid;
}

qint32 OAIGiveawayWinners::getWinnersSelectionDate() const {
    return m_winners_selection_date;
}
void OAIGiveawayWinners::setWinnersSelectionDate(const qint32 &winners_selection_date) {
    m_winners_selection_date = winners_selection_date;
    m_winners_selection_date_isSet = true;
}

bool OAIGiveawayWinners::is_winners_selection_date_Set() const{
    return m_winners_selection_date_isSet;
}

bool OAIGiveawayWinners::is_winners_selection_date_Valid() const{
    return m_winners_selection_date_isValid;
}

qint32 OAIGiveawayWinners::getWinnerCount() const {
    return m_winner_count;
}
void OAIGiveawayWinners::setWinnerCount(const qint32 &winner_count) {
    m_winner_count = winner_count;
    m_winner_count_isSet = true;
}

bool OAIGiveawayWinners::is_winner_count_Set() const{
    return m_winner_count_isSet;
}

bool OAIGiveawayWinners::is_winner_count_Valid() const{
    return m_winner_count_isValid;
}

QList<OAIUser> OAIGiveawayWinners::getWinners() const {
    return m_winners;
}
void OAIGiveawayWinners::setWinners(const QList<OAIUser> &winners) {
    m_winners = winners;
    m_winners_isSet = true;
}

bool OAIGiveawayWinners::is_winners_Set() const{
    return m_winners_isSet;
}

bool OAIGiveawayWinners::is_winners_Valid() const{
    return m_winners_isValid;
}

qint32 OAIGiveawayWinners::getAdditionalChatCount() const {
    return m_additional_chat_count;
}
void OAIGiveawayWinners::setAdditionalChatCount(const qint32 &additional_chat_count) {
    m_additional_chat_count = additional_chat_count;
    m_additional_chat_count_isSet = true;
}

bool OAIGiveawayWinners::is_additional_chat_count_Set() const{
    return m_additional_chat_count_isSet;
}

bool OAIGiveawayWinners::is_additional_chat_count_Valid() const{
    return m_additional_chat_count_isValid;
}

qint32 OAIGiveawayWinners::getPrizeStarCount() const {
    return m_prize_star_count;
}
void OAIGiveawayWinners::setPrizeStarCount(const qint32 &prize_star_count) {
    m_prize_star_count = prize_star_count;
    m_prize_star_count_isSet = true;
}

bool OAIGiveawayWinners::is_prize_star_count_Set() const{
    return m_prize_star_count_isSet;
}

bool OAIGiveawayWinners::is_prize_star_count_Valid() const{
    return m_prize_star_count_isValid;
}

qint32 OAIGiveawayWinners::getPremiumSubscriptionMonthCount() const {
    return m_premium_subscription_month_count;
}
void OAIGiveawayWinners::setPremiumSubscriptionMonthCount(const qint32 &premium_subscription_month_count) {
    m_premium_subscription_month_count = premium_subscription_month_count;
    m_premium_subscription_month_count_isSet = true;
}

bool OAIGiveawayWinners::is_premium_subscription_month_count_Set() const{
    return m_premium_subscription_month_count_isSet;
}

bool OAIGiveawayWinners::is_premium_subscription_month_count_Valid() const{
    return m_premium_subscription_month_count_isValid;
}

qint32 OAIGiveawayWinners::getUnclaimedPrizeCount() const {
    return m_unclaimed_prize_count;
}
void OAIGiveawayWinners::setUnclaimedPrizeCount(const qint32 &unclaimed_prize_count) {
    m_unclaimed_prize_count = unclaimed_prize_count;
    m_unclaimed_prize_count_isSet = true;
}

bool OAIGiveawayWinners::is_unclaimed_prize_count_Set() const{
    return m_unclaimed_prize_count_isSet;
}

bool OAIGiveawayWinners::is_unclaimed_prize_count_Valid() const{
    return m_unclaimed_prize_count_isValid;
}

bool OAIGiveawayWinners::isOnlyNewMembers() const {
    return m_only_new_members;
}
void OAIGiveawayWinners::setOnlyNewMembers(const bool &only_new_members) {
    m_only_new_members = only_new_members;
    m_only_new_members_isSet = true;
}

bool OAIGiveawayWinners::is_only_new_members_Set() const{
    return m_only_new_members_isSet;
}

bool OAIGiveawayWinners::is_only_new_members_Valid() const{
    return m_only_new_members_isValid;
}

bool OAIGiveawayWinners::isWasRefunded() const {
    return m_was_refunded;
}
void OAIGiveawayWinners::setWasRefunded(const bool &was_refunded) {
    m_was_refunded = was_refunded;
    m_was_refunded_isSet = true;
}

bool OAIGiveawayWinners::is_was_refunded_Set() const{
    return m_was_refunded_isSet;
}

bool OAIGiveawayWinners::is_was_refunded_Valid() const{
    return m_was_refunded_isValid;
}

QString OAIGiveawayWinners::getPrizeDescription() const {
    return m_prize_description;
}
void OAIGiveawayWinners::setPrizeDescription(const QString &prize_description) {
    m_prize_description = prize_description;
    m_prize_description_isSet = true;
}

bool OAIGiveawayWinners::is_prize_description_Set() const{
    return m_prize_description_isSet;
}

bool OAIGiveawayWinners::is_prize_description_Valid() const{
    return m_prize_description_isValid;
}

bool OAIGiveawayWinners::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_winners_selection_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_winner_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_winners.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_additional_chat_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prize_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_subscription_month_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unclaimed_prize_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_only_new_members_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_was_refunded_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prize_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGiveawayWinners::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_isValid && m_giveaway_message_id_isValid && m_winners_selection_date_isValid && m_winner_count_isValid && m_winners_isValid && true;
}

} // namespace tele_rest
